#include <stdio.h>
#include <stdlib.h>
 struct node {
     int data;
     struct node* next;
     };
struct node* front = NULL;
struct node* rear = NULL;
void Enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(temp));
    temp->data=x;
    temp->next=NULL;
    if(front == NULL && rear ==  NULL ){
        front=rear=temp;
        return;
        }
        rear->next=temp;
        rear=temp;
    }
void Dequeue(){
    struct node* temp = front;
    if(front == NULL){
        printf("Queue Is Empty");
        return;
        }
    else if(front == rear){
        rear=front=NULL;
        }
    else{
        front=front->next;
        }
        free(temp);
    }
void print(){
    struct node* temp = front;
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
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
