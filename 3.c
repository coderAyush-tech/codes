#include<stdio.h>
#include<string.h>
int main(){
int isfound=0;
int count=0;
char temp;
    char str[1000];
    fgets(str,1000,stdin);
     str[strcspn(str, "\n")] = '\0';
    for (int i = 0; i < str[i]; i++)
    {
        for(int j=i+1;j<str[j];j++){
            if(str[i]==str[j]){
              isfound=1;
              count++;
            temp=str[i];
              break;
           
        }

        
    }
   
    
    
}
if(isfound==1){
   printf("%d",count);
   printf("%c",temp);
}else{
    printf("not");
}
}