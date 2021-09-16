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

int count (struct node *p){
    int l = 0;
    while (p){
        l++;
        p=p->next;
    }
    return 1;
}

int main (){
    struct node *temp;
    int A[] = {2,4,3,8,5,9,10};
    create (A,9);
    // display (first);
    cout<<"length is "<<count(first);
    return 0;
}