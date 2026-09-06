#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

node *Rear , *Front;

/***********************/

node *GetNode(){
    node *p;
    p=new node;
    return p;
}

/***********************/

void Initialize(){
    Rear = NULL;
    Front = NULL;
}

/***********************/

bool IsEmpty(){
    if(Front==NULL){
        return true;
    }
    else{
        return false;
}
}

/************************/

void EnQueue(int x){
    node *temp = GetNode();
    temp->data = x;
    temp->next = NULL;

    if(Rear != NULL){
        Rear->next = temp;
    } else {
        Front = temp;
    }
    Rear = temp;
}


/*****************************/

int DeQueue(){
    if(Front == NULL){
        cout << "Queue UnderFlow";
        exit(1);
    }

    node *temp = Front;
    Front = Front->next;
    int X = temp->data;
    delete temp;

    if(Front == NULL) Rear = NULL; // important fix
    return X;
}


/*******************************/

int main(){

    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);
    EnQueue(5);
    EnQueue(6);
    EnQueue(7);
   
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    cout<<DeQueue()<<endl;
    
    

}