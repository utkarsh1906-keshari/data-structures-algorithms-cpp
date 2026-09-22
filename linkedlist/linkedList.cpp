#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

//==========================================================================================================================================

void insAtBeg(Node*& Head, int x){
    Node* Q = new Node();              // 1)Type automatically handle karta hai , 2) Constructor call karta hai , 3) delete se free

// Node* Q = (Node*)malloc(sizeof(Node));      //1)Yahan malloc() heap memory mein ek Node jitni jagah allocate karega. 2) void* return karta hai
                                            //  3)Constructor call nahi karta , 4) free() se free
    Q->data = x;
    Q->next = Head;

    Head = Q;
}

//==================================================================================================================================

void insAtEnd(Node*& Head , int x){
    Node* Q = new Node();
    Q->data = x;
    Q->next = NULL;

    Node* P = Head;

    if(Head==NULL){
        Head=Q;
    }
    else{
        while(P->next!=NULL){
            P=P->next;
        }
        P->next=Q;
    }

}


//=====================================================================================================================================

void InsAft(Node*&Head , Node*P , int x){
    Node*Q = P->next;
    
    Node*R = new Node();
    R->data = x;
    
    P->next = R;
    R->next = Q;

}

//======================================================================================================================================
          
Node* DelBeg(Node*&Head){
    if (Head == NULL)
    {
        cout << "List is Empty" << endl;
        return NULL;
    }

    Node*P = Head;
    Head = Head->next;
    int x = P->data;
    delete P;
    return Head;
}

//=============================================================================================================================================

Node* DelEnd(Node*&Head){
    Node* P = Head;
    Node* Q = NULL;

    while(P->next!=NULL){
        Q=P;
        P=P->next;
    }
    if(Q!=NULL){
        Q->next = NULL;
    }
    else{
        Head=NULL;
    }

    int x = P->data;

    delete P;

    return Head;
}

//============================================================================================================================================

Node* DelAft(Node*&Head , Node*P){
      Node*Q = P->next;
      Node*R = Q->next;

      P->next = R;

      int x = Q->data;
       delete Q;

      return Head; 

}

//==============================================================================================================================================

void display(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->data << "->";
        Head = Head->next;
    }
}

//============================================================================================================================================

int main()
{
    Node* Head = NULL;

    insAtBeg(Head, 30);
    insAtBeg(Head, 20);
    insAtBeg(Head, 10);


    DelBeg(Head);

    display(Head);

}