#include<stdio.h>
long factorial (int x){
long f = 1;
for (int i = 1;i <=x; i++){
 f = f*i;
}
  printf("the factorial is %ld",f );
  return f;
}

int main(){
  int a;
  printf("enter a numbers: ");
  scanf("%d",&a);
  factorial (a);

return 0;
}
