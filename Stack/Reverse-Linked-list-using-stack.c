#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int info;
    struct node* link;
    }; 
struct nodestack {
    struct node* data;
    struct nodestack* next;
    };
struct nodestack* headstack;
struct node* head;
void insert(int x){
    struct node* temp=(struct node*)malloc(sizeof(temp));
    if(head == NULL){
        temp->info=x;
        temp->link=head;
        head=temp;
        return;
        }
     struct node* temp2=head;
     while(temp2->link != NULL){
         temp2=temp2->link;
         }
         temp->info=x;
         temp2->link=temp;
         temp->link=NULL;
    }
void push(struct node* x){
    struct node*temp0 =x;
    while(x != NULL){
        struct nodestack* temp = (struct nodestack*)malloc(sizeof(temp));
    temp->data=x;
    temp->next=headstack;
    headstack=temp;
    x=x->link;
        }
    
    }
void pop(){
    headstack=headstack->next;
}
void print(){
    struct node* temp0= head;
    printf("[");
    while(temp0 != NULL){
        printf("%d ",temp0->info);
        temp0=temp0->link;
        }
        printf("]\n");
    }
    //revll in this finction we will use stack(you can use array implenebtion of stack to reverse a LinkedList
void revll(){
    struct node * temp =head;
    head =headstack->data;
    pop();
    struct node* temp2 = head;
    while(temp2 != temp){
        temp2->link =headstack->data;
        pop();
        temp2=temp2->link;
        }
        temp2->link=NULL;
    }
int main(){
    headstack=NULL;
    head =NULL;
    insert(1);
    insert(2);
    insert(3);
    print();
    push(head);
    revll();
    print();
    return 0;
    }
