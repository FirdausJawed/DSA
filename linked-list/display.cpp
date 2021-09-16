#include<iostream>
using namespace std;

struct node{
    int dsts;
    struct Node *next;
}*first = NULL;


void create (int A[], int n){
    int i;
    struct Node *t, *last;
    first = new struct Node;
    first -> data = A[0];
}