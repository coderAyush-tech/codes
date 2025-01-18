#include<stdio.h>
int main(){
    char str [10000];
    char abc[10000];
   int count=0;
  
    fgets(str,10000,stdin);
      fgets(abc,10000,stdin);
    for(int i=0;i<str[i];i++){
        
        if(str[i]=!abc[i]){
          count++;
        }
      
        
    }
     printf("%d",count);

}