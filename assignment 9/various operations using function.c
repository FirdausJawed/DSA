#include<stdio.h>
int add (int p, int q){
  int c = p + q;
  return c;
}

int substract (int p, int q){
  int c = p + q;
  return c;
}

int divide (int p, int q){
  int c = p / q;
  return c;
}

int multiply (int p, int q){
  int c = p * q;
  return c;
}

int main(){
  int a,b;
  printf("enter two numbers: ");
  scanf("%d%d",&a,&b);

  printf("the sum of the numbers: %d\n",add(a,b));
  printf("the difference of the numbers:%d\n ",substract(a,b));
  printf("the multiplication of the numbers:%d\n",multiply(a,b));
  printf("the divide of the numbers: %d\n",divide(a,b));
return 0;
}
