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