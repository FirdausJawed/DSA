#include <stdio.h>

void swap(int* p, int* q){
int temp;
temp = *p;
*p=*q;
*q=temp;
}
int main() {
 int a = 1;
 int b = 10;
 swap(&a,&b);
 printf("swapped function", a,b);
  return 0;
}
