#include <stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node* Next;
};
struct Node* head;
void insert(int x);
void print();
int main()
{
   head =NULL;
   int d,i=0,a;
   printf("How many number you want to insert:\n ");
   scanf("%d",&d);
   for(i;i<d;i++){
       printf("Enter your number: \n");
       scanf("%d",&a);
      insert(a);
      print();
   }
   

    return 0;
}
void insert(int x){
    struct Node* A =(struct Node*)malloc(sizeof(A));
    // head=A;
    // A->data=X;
    // A->Next =NULL;
    A->data=x;
    A->Next=head;
    head=A;
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
