


#include <stdio.h>
int leader(int arr[], int n){
   printf("[");
   for(int i=0; i<n; i++){
      int count=0;
      for(int j=i+1; j<n; j++){
         if(arr[j]<arr[i]){
            count++;
         } 
      }
      if(count == (n-(i+1))&& i!=n-1){
         printf("%d,",arr[i]);
      }
      else if (i==n-1){
         printf("%d]",arr[i]);
      }

   }
}
void main(){
   int arr[] ={16,17,4,3,5,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   leader(arr,n);
}