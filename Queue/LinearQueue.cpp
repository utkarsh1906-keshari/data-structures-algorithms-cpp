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

        rear =-1;
        front=0;

    }

   bool IsEmpty(){
        if(rear-front+1==0){
            return true;

        }
        else{
            return false;
        }

    }

   void EnQueue(int x){
    int m=item.size();

    if(rear==m-1){
        cout<<"Queue OverFlows";
        exit(1);
    }
        rear++;
        item[rear]=x;

    }

   int DeQueue(){
    if(rear-front+1==0){
        cout<<"Queue UnderFlows";
        exit(1);
    }
        int x=item[front];
        front++;
        return x;
    }
};


int main(){
Queue Q(5);

Q.EnQueue(1);
Q.EnQueue(2);
Q.EnQueue(3);
Q.EnQueue(4);
Q.EnQueue(5);

cout<<Q.DeQueue()<<endl;
cout<<Q.DeQueue()<<endl;
cout<<Q.DeQueue()<<endl;
cout<<Q.DeQueue()<<endl;
cout<<Q.DeQueue()<<endl;


}
// struct Queue
// {
//     char item[size];
//     int REAR;
//     int FRONT;

//  };

//  Queue Q;

//  void initialize(){
//     Q.REAR = -1;
//     Q.FRONT = 0;
//  }

//  void EnQueue(int x){
//     if(Q.REAR ==size-1  ){
//         cout<<"Queue Overflow"<<endl;
//         exit(1);
//     }
//     else{
//         Q.REAR
//     }
//  }