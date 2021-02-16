#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(int x);
void print(struct Node* h);
void print_rev(struct Node* p);
struct Node* head;
int main()
{
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    print(head);
    printf("\n");
    print_rev(head);
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
void print(struct Node* h){
    if(h== NULL) return;
    printf("%d ",h->data);
    print(h->next);
}
void print_rev(struct Node* p){
     if(p== NULL) return;
    print(p->next);
    printf("%d ",p->data);
}
