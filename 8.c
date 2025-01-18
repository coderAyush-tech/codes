


#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000];
    char str2[1000];
    fgets(str1,1000,stdin);
     fgets(str2,1000,stdin);
     
     int count2=0;
     while(str2[count2]){
      if(str2[count2]=='\n'){
        str2[count2]='\0';
        break;
      }
      count2++;
     }

     for(int i=0;i<count2;i++){
      str1[i]=str2[i];
     }

     for(int i=0;i<count2;i++){
      printf("%c",str1[i]);
     }

    //  printf("%s",str1);
    
}