#include <stdio.h>
#include <stdlib.h>

// take two ordered arrays and merge then
// Example
// nums1 = [1,2,3,0,0,0] , nums2 = [2,3,5]
// output = [1,2,2,3,3,5]
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    while(n > 0){
        
        if(m == 0){
            nums1[nums1Size-1] = nums2[n-1];
            n--;
        }
        else if(nums2[n-1] > nums1[m-1]){
            nums1[nums1Size-1] = nums2[n-1];
            n--;
        }
        else{
            nums1[nums1Size-1] = nums1[m-1];
            m--;
        }
        nums1Size--;
    }
}

int main(){

	int m = 3, n = 3;
	int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};

    merge(nums1, m+n, m, nums2, n, n);

    for(int i = 0; i < m+n; i++){
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
