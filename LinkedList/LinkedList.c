#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* Next;    
    
};
struct Node* head=NULL;
int f=0;
void insert(int x);
void print();
int main(){
    int z,i=0;
    printf("How many elements you want?\n");
    scanf("%d",&z);
    for (i;i<z;i++){
        int v;
        printf("Enter you number:\n");
        scanf("%d",&v);
        insert(v);
    }
    return 0;
}
void insert(int x){
    struct Node* B= NULL;
    if(head==NULL){
        struct Node* C= (struct Node*)malloc(sizeof(struct Node));
        C->data=x;
        C->Next=NULL;
        head = C;
        B=C;
        f++;
        print(C);
    }
    else{
         struct Node* D= (struct Node*)malloc(sizeof(struct Node));
         D->data=x;
         D->Next=NULL;
         D=B;
         f++;
         print(D);
    }
}
void print(struct Node* B){
    int i;
    printf("[");
    for(i=1;i<f;i++){
        printf("%d",B->data);
    }
    printf("]\n");
}

