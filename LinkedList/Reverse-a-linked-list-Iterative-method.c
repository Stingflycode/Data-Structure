#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x);
void print();
void reverse();
int main() {
   head = NULL;
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   print();
   reverse();
   print();
    return 0;
}
void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(temp));
    if(head==NULL){
        temp->data=x;
        temp->next=NULL;
        head = temp;
    }
    else{
    struct Node* temp2=head;
    while(temp2->next != NULL){
       temp2=temp2->next; 
    }
    temp->data=x;
    temp->next=NULL;
    temp2->next=temp;
    }
}
void print(){
    printf("[ ");
    struct Node* temp= head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("]\n");
}
void reverse(){
    struct Node* Next=NULL;
    struct Node* current=head;
    struct Node* prev=NULL;
    while(current != NULL){
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
    }
    head=prev;
}
