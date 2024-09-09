/*Problem: Sort an Array of 0s, 1s, and 2s
You are given an array arr consisting only of 0s, 1s, and 2s. The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. This means you need to rearrange the array in-place.

Input :
An integer array arr of size n where each element is either 0, 1, or 2.
Example : arr = [0, 1, 2, 1, 0, 2, 1, 0]

Output :
The sorted array, arranged in increasing order of 0s, 1s, and 2s.
Example: [0, 0, 0, 1, 1, 1, 2, 2]
 */

#include <stdio.h>

int Insertion_sort(int arr[],int n){
   int i;
   int key;
   int j;
   for(i=1; i<n; i++){
      j = i-1;
      key = arr[i];
      while(j>=0 && arr[j]>key){
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
   }
   printf("[");
    for(int k=0; k < n; k++) {
        if (k == n-1) {
            printf("%d", arr[k]);
        } else {
            printf("%d,", arr[k]);
        }
    }
    printf("]\n");

}

void main(){
   int arr[] = {0,1,2,1,0,2,1,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   //printf("%d",n);
   Insertion_sort(arr,n); 
}