#include <iostream>
using namespace std;

#define n 5
int queue[n],front = -1,rare =-1;

void isFull(){
    if (rare == n-1){

        cout<<"queue is full"<<endl;
    }
}

void isEmpty(){
    if(front=-1 || front > rare)
    {
        cout<<"queue is empty"<<endl;
    }
}

void enqueue(int val)
{
    if(rare == n-1)
    {

        cout<<"queue is overflow"<<endl;
    }

    else{

        if(front==-1)
        front=0;

        rare++;
        queue[rare]==val;
        cout<<"value ia added in queue"<<endl;

        
    }
}

int main(){

    int val;
    cout<<"enter val"<<endl;
    cin>>val;

    enqueue(val);
}