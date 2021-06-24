#include <stdio.h>
#include <stdlib.h>
#define MAX 101
int A[MAX];
int front=-1;
int rear=-1;
int count =0;
void Enqueue(int x){
    if((rear+1)%MAX == front){
        printf("Sorry the Queue is FULL");
        return;
    }
    else if(IsEmpty() == 1){
        front=rear=0;
        }
    else {
        rear=(rear+1)%MAX;
        }
    A[rear]=x;
    count++;
    }
void Dequeue(){
    if (IsEmpty() == 1){
        printf("Sorry the Queue is EMPTY");
        return;
        }
    else if(front == rear){
        front=rear=-1;
        }
        else {
            front=(front+1)%MAX;
            }
     count--;
    }
int IsEmpty(){
    if(front == -1 && rear == -1){
        return 1;
        }
        else 
            return 0;
    }
void print(){
    int i;
    for(i=0;i<count;i++){
        int index = (front+i)%MAX;
        printf(" %d ",A[index]);
        }
        printf("\n");
    }
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    print();
    Dequeue();
    print();
    return 0;
    }