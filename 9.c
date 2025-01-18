#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char temp;
    fgets(str,1000,stdin);
    for(int i=0;i<str[i];i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
             printf("%c",str[i]);
        }else if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
            printf("%c ",str[i]);
            
        }
    }
    
}