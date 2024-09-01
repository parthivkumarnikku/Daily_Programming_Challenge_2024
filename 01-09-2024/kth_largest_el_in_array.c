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
int return_kth(int arr[], int k , int n){
   
   int max = arr[0];

   for (int i = 0; i<n; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   //printf("%d", max);    // 1
   count++;                // 2
   for (int i = 0; i<n; i++){
      if(arr[i] == max){
         arr[i] = 0;
      }
   }                    // 3 -> array modified // 4 -> condition check
   if (count != k){
      return_kth(arr , k, n);
   }
   else 
   return max;
   
}

void main(){
   printf("Enter the number of values in the array please : ");
   int n;
   scanf("%d",&n);
   printf("Enter the value of k for which you need the kth largest number : ");
   int k;
   scanf("%d",&k);
   int arr[n];
   for (int i = 0; i < n; i++){
      int number;
      printf("Enter the number in %d place : ", i+1);
      scanf("%d",&number);
      arr[i] = number;
   }
   printf("The %d th largest number in the provided array is : %d", k ,return_kth(arr, k, n));
}