#include <stdio.h>

int arr_max(int arr[], int low_index, int high_index){
   if (low_index > high_index) {
      return 0;
   }
   int max = arr[low_index];
   for(int i = low_index + 1; i <= high_index; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   return max;
}

int minimum(int a, int b){
   if (a < b){
      return a;
   }
   return b; 
}

int water_trapping(int arr[], int n){
   int trapped = 0;
   for(int i = 0; i < n; i++){
      int left_max = arr_max(arr, 0, i - 1);
      int right_max = arr_max(arr, i + 1, n - 1);
      int res = minimum(left_max, right_max) - arr[i];
      if(res > 0){
         trapped += res;
      }
   }
   return trapped;
}

int main(){
   int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("%d\n", water_trapping(arr, n));
   return 0;
}
