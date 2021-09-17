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

int Rcount (struct node *p){
    if (p != NULL)
    {
       return Rcount(p ->next)+1;
    }
    else{
        return 0;
    }
    
}

int sum (struct node *p){
    int s=0;
    while (p != NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum (struct node *p){
    if(p=NULL){
        return 0;
    }
    else {
        return Rsum(p->next)+p->data;
    }
}


int Max (struct node *p){
    int max = INT32_MIN;
    while (p)
    {
       if (p->data>max)
       {
          max=p->data; 
       }
       p=p->next;
    }
    return max; 
}

// int RMax (struct node *p) {
//   int x = 0;
//   if (p==0)
//   {
//      return INT32_MIN;
//   }
//   x=RMax(p->next);
//   if (x>p->next)
//  {
//     return x;
//  }
//  else {
//     return p-> data;
//  }
// }


// node *Search (node *p,int key){
//     while (p != NULL)
//     {
//         if (key == p->data)
//         {
//            return p;
//         }
//         p = p->next;
//     }
//     return NULL;
// }

int main (){
    struct node *temp;
    int A[] = {2,9,4,3,8,5,9,20};
    create (A,8);
    // display (first);
    // cout<<"length is "<<count(first);
    // cout << "sum is "<<sum(first);
    cout << "max is "<<Max(first);
      cout << "key is "<<Search(first);
    return 0;
}