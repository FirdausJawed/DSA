#include<stdio.h>
void swap (int x, int y){

  int temp;
  temp = x;
  x = y;
  y = temp;
  printf("the swapped values are %d and %d",x,y);

}

int main(){
  int a,b;
  printf("enter two numbers: ");
  scanf("%d%d",&a,&b);
  swap ( a, b);

return 0;
}
