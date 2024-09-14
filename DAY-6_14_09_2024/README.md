In this code, the main function needs to return a collection of tuples, each representing a start index and an end index. Since C does not have a built-in list data structure like higher-level languages, we use arrays to achieve this.

To manage this, you will need to handle dynamic memory allocation for the array of tuples and keep track of its size. This involves passing a pointer to an integer variable that will store the count of tuples. The function will modify this variable to reflect the number of tuples added to the array.

# Main function can be like this
```
int main(){
   int arr[]={1,2,-3,3,-1,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int result_count;
   struct indices* result_array = zero_subarray(arr,n, &result_count);
   for(int i=0; i<result_count; i++){
      printf("(%d,%d)",result_array[i].start_index, result_array[i].end_index);
   }
}
```
Main function will be able to have an eye on the number of elements in the dynimacally allocated array "*result_arr*".

This method is not prefferd because there is a problem in questions like these if the function is already given as a templete then we cannot change the number of elements in the function as well as the parametters. Hence the one in [HERE](./subarray.c) is preffered that is it directly prints the values in the function itself.

# zero_subarray function can be like this :-

```
struct indices* zero_subarray(int arr[],int n, int *result_count){
   struct indices *result_array = NULL;
   int count=0;
   struct indices result;
   
   for(int i=0; i<n; i++){
      int sum=arr[i];

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
   *result_count = count;
   return result_array;
}
```
This function as you can observe at the last part of the code there is a line saying **result_count = count;* which updates the *result_count* in the main function since its a pointer and hence the main function has access to the number of elements in the array *result_array*.