/*Problem: Find the duplicate number
You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. There is exactly one duplicate number in the array, but it may appear more than once. Your task is to find the duplicate number without modifying the array and using constant extra space.
Input :
An integer array arr of size n+1, where each element is an integer in the range [1, n].
Example : arr = [3, 1, 3, 4, 2]

Output :
Return the duplicate integer present in the array.
Example: Duplicate Number : 3
*/
/*there is a possiblity of subtracting both the sums of numbers in arrays like we have added them in the previuous question but it doesnt work if there
are more than one duplicates in array -> this approach have the complexity of O(n)*/


/*
Variables :- 
n_arr = number of elements in array
n = maximum possibility of array value in the array
*/

#include <stdio.h>
#include <stdlib.h>
int repeated_number(int arr[], int n_arr){
   for(int i=0; i<n_arr; i++){
      for(int j=0; j<n_arr; j++){
         if(i==j){
            continue;
         }
         else if(arr[i] - arr[j] == 0){
               return arr[i];
         }
      }
   }
}

int main(){
   int n = 4;           
   int n_arr = n+1;
   int arr[]={3,1,3,4,2};
   int repeated;
   // checking if all the array elements are in the range of n
   for(int i=0; i<n_arr; i++){
      if(arr[i]<n_arr){
         repeated = repeated_number(arr,n_arr);
      }
      else{
         printf("%d indexed element with value %d is grater than or equal to %d\n", i,arr[i],n_arr);
         exit(0);
         
      }  

   }
   printf("Repeated number = %d",repeated);
}
