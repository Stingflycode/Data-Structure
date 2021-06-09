#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
    };
struct Node* head; //Global variable -pointer to head node
struct Node* getnewnode(int x){
    struct Node* myNode= (struct Node*)malloc(sizeof(myNode));
    myNode->data=x;
    myNode->prev=NULL;
    myNode->next=NULL;
    return myNode;
    }
void insertathead(int x){
    struct Node* newnode=getnewnode(x);
    if(head ==NULL){
        head =newnode;
        return;
        }
    head->prev=newnode;
    newnode->next=head;
    head = newnode;
    }
void print(){
    struct Node* temp=head;
    printf("[ ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
        }
        printf("]\n");
    }
void printrev(){
    struct Node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
    struct Node* temp2 = temp;
    printf("[ ");
    while(temp2 !=NULL){
        printf("%d ",temp2->data);
        temp2=temp2->prev;
    }
     printf("]\n");
    }
void insertattail(int x){
    struct Node* newnode=getnewnode(x);
    if(head == NULL){
        head=newnode;
        return;
        }
    struct Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
        }
    temp->next=newnode;
    newnode->prev=temp;
    }
int main(){
    insertathead(1);
    insertathead(2);
    insertathead(3);
    insertathead(4);
    print();
    printrev();
    insertattail(5);
    insertattail(6);
    print();
    printrev();
    return 0;
    }
