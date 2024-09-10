#include <stdio.h>

int sum(int n){
   return n*(n+1)/2;
}

int missing(int arr[], int arr_size){
   int sum_n = sum(arr_size+1);
   int arr_sum = 0;
   for(int i = 0; i < arr_size; i++){
      arr_sum = arr_sum + arr[i];
   }
   return sum_n-arr_sum;
}

int main(){

   int arr[]={1,2,4,5,6,3,7,8,9,10,11,13};    /*array values*/
   
   int n = sizeof(arr)/sizeof(arr[0]);
   int arr_size = n-1;
   printf("Missing Element :- %d",missing(arr,arr_size));
   return 0;

}