#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char str1[1000];
    int count=0;
    fgets(str,1000,stdin);
     fgets(str1,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    str1[strcspn(str1,"\n")]='\0';
    for(int i=0;i<str[i];i++){
      count ++;
    }
    for(int i=0;i<str[i];i++){
      str1[i]=str[i];
    }

    for(int i=0;i<str[i];i++){
      str1[i]=str[i];
    }
    for(int i=0;i<count;i++){
      printf("%c",str1[i]);
    }
   
  
    
}