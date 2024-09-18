#include<stdio.h>
#include<string.h>
int main(){
    
    char *strs[]={"flower", "flow", "flight"};
    int n=sizeof(strs)/sizeof(strs[0]);
    int  common_prefix=0;

    for(int i=0;i<n;i++){
        char current=strs[0][i];
        int match_count=0;
        for (int j=1;j<n;j++){
            if ( strs[j][i]==current){
                match_count++;
            }
        }
        if(match_count==n-1){
            common_prefix++;
        }
        else{
            break;
        }
       
    }
    for(int i=0; i<common_prefix; i++){
      printf("%c",strs[0][i]);
    }
    
}