/*
Question :
   You are given an unsorted array of integers. 
   Your task is to find the median of the array. 
   The median is the middle value in an ordered list of numbers. 
   If the list has an even number of elements, the median is the average of the two middle numbers.
   Implement a function that returns the median of the array without explicitly sorting the entire array.
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
   int arr[n];
   for (int i = 0; i < n; i++){
      int number;
      printf("Enter the number in %d place : ", i+1);
      scanf("%d",&number);
      arr[i] = number;
   }
   if(n%2==0){
      int temp1,temp2;
      temp1 = n/2;
      temp2 = (n+2)/2;
      printf("The number of elements in the array is even \n");
      printf("The median of the array at %p is: %.1f", arr, (return_kth(arr, temp1, n) + return_kth(arr, temp2, n)) / 2.0);

   }
   else {
       int temp = (n+1)/2;
       printf("Number of elements in the array is observed as odd \n");
       printf("The median of the array at %p is: %d",arr,return_kth(arr,temp,n));
   }
  
}