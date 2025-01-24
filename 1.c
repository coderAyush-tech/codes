#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    char temp;
    fgets(str,100,stdin);
       str[strcspn(str, "\n")] = '\0';

    for(int i=0;i<str[i];i++){
        for(int j=i+1;j<str[j];j++){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
      }
         printf("%c",str[i]);
    }
 
}
