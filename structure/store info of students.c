#include<stdio.h>

typedef struct student {
   char name[50];
   int id;
   float cgpa;
}ug;

int main(){
 ug n1;
 printf("enter name");
scanf ("%s",&n1.name);

printf("enter id");
scanf ("%d",&n1.id);

printf("enter cgpa");
scanf ("%f",&n1.cgpa);

printf("student name is %s whose id is %d with his/her cgpa %f",n1.name,n1.id,n1.cgpa);
  return 0;
}
