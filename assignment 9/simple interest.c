#include<stdio.h>
int si (int p, float r, int t){

 float SI = (p*r*t)/100;
  printf("the simple interest is %f",SI );
  return SI;
}

int main(){
  int p,t;
  float r;
  printf("enter principle value,rate and time: ");
  scanf("%d%f%d",&p,&r,&t);
si (p,r,t);

return 0;
}
