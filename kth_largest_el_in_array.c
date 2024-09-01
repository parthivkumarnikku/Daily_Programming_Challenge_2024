/*
Question : 
   You are given an unsorted array of integers and a positive integer K. Your task is to find the Kth largest element in the array. The Kth largest element is the element that would appear in the Kth position if the array were sorted in descending order.

You need to implement a function that returns this Kth largest element without explicitly sorting the entire array.

Example
arr = [3, 2, 1, 5, 6, 4]
k = 2
Output: 5
*/

#include <stdio.h>

int count = 0;
int return_kth(int arr[], int k){
   
   int max = arr[0];

   for (int i = 0; i<6; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   //printf("%d", max);    // 1
   count++;                // 2
   for (int i = 0; i<6; i++){
      if(arr[i] == max){
         arr[i] = 0;
      }
   }                    // 3 -> array modified // 4 -> condition check
   if (count != k){
      return_kth(arr , k);
   }
   else 
   return max;
   
}

void main(){
   int arr[6] = {3,2,1,5,6,4};
   printf("%d",return_kth(arr, 2));
}