#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first = NULL;


void create (int A[], int n){
    int i;
    struct node *t, *last;
    first = new struct node;
    first -> data = A[0];
    first -> next = NULL;
    last = first;
    for ( i = 0; i < n; i++)
    {
        t = new struct node;
        t -> data = A[i];
        t ->next = NULL;
        last -> next = t;
        last =t;
    }
    
}

void display (struct node *p){
    while (p != NULL)
    {
       cout<< p -> data;
       p = p -> next;
    }
    
}

void Rdisplay (struct node *p){
    if (p != NULL){
        Rdisplay (p -> next);
        cout<< p -> data; 
    }
}

int main (){
    struct node *temp;
    int A[] = {2,4,3,8,5,9,10};
    create (A,8);
    display (first);
    return 0;
}