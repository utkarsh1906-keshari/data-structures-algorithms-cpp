#include <bits/stdc++.h>
using namespace std;

class Queue
{
    vector<int>item;
    int rear ;
    int front;

    public:
    Queue(int m){
        item.resize(m);
        // item=vector<int>(m);   both are same 

        rear =item.size()-1;
        front=item.size()-1;

    }

   bool IsEmpty(){
        if(rear==front){
            return true;

        }
        else{
            return false;
        }

    }

   void EnQueue(int x){
    int m=item.size();

    if((rear+1)%m == front){
        cout<<"Queue OverFlows";
        exit(1);
    }
    else{
        rear = (rear+1)%m;
        item[rear]=x;
        
    }
       
        

    }

   int DeQueue(){
    int m=item.size();

    if(rear==front){
        cout<<"Queue UnderFlows";
        exit(1);
    }
    else{
        front=(front+1)%m;
        int x=item[front];
        
        return x;

    }

    }
        
    };


int main(){
Queue Q(6);

Q.EnQueue(1);
Q.EnQueue(2);
Q.EnQueue(3);

Q.DeQueue();

Q.EnQueue(4);
Q.EnQueue(5);

Q.DeQueue();

Q.EnQueue(6);
Q.EnQueue(7);

Q.DeQueue();

Q.EnQueue(8);
Q.EnQueue(9);



}