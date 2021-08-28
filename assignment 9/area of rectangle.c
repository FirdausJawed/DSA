#include<stdio.h>
int add (int x, int y){

  int c = x*y;
  printf("the area is %d",c);
  return c;
}

int main(){
  int a,b;
  printf("enter length and breath: ");
  scanf("%d%d",&a,&b);
  add ( a, b);

return 0;
}
