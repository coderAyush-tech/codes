#include<stdio.h>
#include<string.h>
int main(){
    // char str[]={"abcd"};
    // printf("%d",strlen(str));

    char str[1000];
    char str1[1000];
    fgets(str,1000,stdin);
     fgets(str1,1000,stdin);
    //  str[strcspn(str,"\n")]='\0';
    //     str[strcspn(str1,"\n")]='\0';
     //printf("%d",strcmp(str,str1));
    //  printf("%d",strcpy(str,str1));
    // printf("%s",strcat(str,str1));
    int j=0;
    while(str[j]){
        if(str[j]=='\n'){
            str[j]='\0';
            break;
        }
        j++;
    }
    printf("%s",strcat(str,str1));

    
    
}