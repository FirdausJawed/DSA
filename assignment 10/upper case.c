#include<stdio.h>
#include <string.h>
int main(){
char str[100];
 printf("enter the string: ");
 scanf("%s",&str);

 for(int i = 0; i != '\0'; i++){

   if(str[i]>='a' && str[i]<='z'){
     str[i] = str[i]-32;
   }
 }

 printf("in upper case it is: %s ",str);

return 0 ;
}
