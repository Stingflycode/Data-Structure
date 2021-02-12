#include <stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node* Next;
};
struct Node* head;
void insert(int x,int n);
void print();
int main()
{
  head =NULL;
  insert(3,1);
  insert(5,2);
  insert(0,3);
  insert(7,2);
  print(); //[3 7 0]
    return 0;
}
void insert(int x,int n){
    struct Node* temp1 =(struct Node*)malloc(sizeof(temp1));
    temp1->data=x;
    temp1->Next=NULL;
    if(n == 1){
        temp1->Next=head;
        head=temp1;
        return;
    }
    struct Node* temp2 = head;
    int i=0;
    for(i;i<n-2;i++){
        temp2=temp2->Next;
    }
    temp1->Next=temp2->Next;
    temp2->Next=temp1;
    
}
void print(){
    printf("[ ");
    struct Node* temp= head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->Next;
    }
    printf("]\n");
}
