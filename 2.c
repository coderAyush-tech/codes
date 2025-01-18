#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000];
    int count=0;
    int countd=0;
    char str[5]={'a','e','i','o','u'};
    fgets(arr,1000,stdin);
    arr[strcspn(arr, "\n")] = '\0';
    for(int i=0;i<arr[i];i++){
        if(str[i]==arr[i]){
            count++;

        }else{
  countd++;
        }
      
    }
    printf("vowel count:%d\n",count);
    printf("consonant count:%d",countd);
}