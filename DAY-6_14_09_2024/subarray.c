#include <stdio.h>
#include <stdlib.h>
struct indices{
   int start_index;
   int end_index;
};

void zero_subarray(int arr[],int n){
   struct indices *result_array = NULL;
   int count=0;
   struct indices result;
   
   for(int i=0; i<n; i++){
      int sum=arr[i];
         if(sum == 0){
         result_array = realloc(result_array, (count+1)*sizeof(struct indices));
         result.start_index = i;
         result.end_index = i;
         result_array[count] = result;
         count++;
         }

      for(int j=i+1; j<n; j++){
         sum = sum+arr[j];
         if(sum == 0){
         result_array = realloc(result_array, (count+1)*sizeof(struct indices));
         result.start_index = i;
         result.end_index = j;
         result_array[count] = result;
         count++;
         }
      }
   }
   for(int i=0; i<count; i++){
      printf("(%d,%d)",result_array[i].start_index, result_array[i].end_index);
   }
}

int main(){
   int arr[]={-3,1,2,-3,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   zero_subarray(arr,n);
}