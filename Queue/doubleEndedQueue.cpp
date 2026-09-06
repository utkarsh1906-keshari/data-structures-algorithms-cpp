#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};


    node* front;
    node* rear;


node *GetNode(){
    node *p;
    p=new node;
    return p;
}    

void InsFront(int x){
        node *p;
        p=GetNode();
        p->data=x;
        p->prev=NULL;
        p->next=front;
        if(front != NULL){
            front->prev=p;
        }
        else{
            rear=p;
        }

        front=p;


    }

void InsRear(int x){
        node *p;
        p=GetNode();
        p->data=x;
        p->next=NULL;
        p->prev=rear;
        if(rear != NULL){
            rear->next=p;
        }
        else{
            front=p;
        }

        rear=p;


    }



 