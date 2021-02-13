#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x);
void delete1(int y);
void print();
int main()
{
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    print();
    int z;
    printf("Enter the position:\n");
    scanf("%d",&z);
    delete1(z);
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
void delete1(int y){
    struct Node* T=head;
    if(y == 1){
        head = T->next;
        free(T);
        return;
    }
    int i=0;
    for(i;i<y-2;i++){
        T=T->next;
    }
    struct Node* D = T->next;
    T->next=D->next;
    free(D);
}

