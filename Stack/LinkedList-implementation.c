#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
    };
struct node* head;
void push(int x){
    struct node* temp = (struct node*)malloc(sizeof(temp));
    temp->data=x;
    temp->next=head;
    head=temp;
    }
void pop(){
    head=head->next;
}
void print(){
    struct node* temp= head;
    printf("[");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
        }
        printf("]\n");
    }
int main(){
    head=NULL;
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    pop();
    pop();
    print();
    return 0;
    }
