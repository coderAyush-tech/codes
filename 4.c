#include<stdio.h>
int main(){
    char str[1000];
    int count=0;
    fgets(str,1000,stdin);
    for(int i=0;i<str[i];i++){
        if(str[i]==' '){
            
            count++;
        }
    }
    printf("%d",count);
}