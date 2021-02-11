#include <stdio.h>
#include <stdlib.h>
struct Node {
    int val;
    struct Node* Next;
};
struct Node* head ;
void insert(int x);
void print();
int main()
{
   head =NULL;
   int d,i=0,f;
   printf("How many number you want to insert:\n");
   scanf("%d",&d);
   for(i;i<d;i++){
       printf("Enter your number:\n");
       scanf("%d",&f);
       insert(f);
       print();
   }
    return 0;
}
void insert(int x)
{
    struct Node *A = malloc(sizeof(*A));

    A->val = x;
    A->Next = NULL;

    struct Node *prev = NULL;
    for (struct Node *cur = head;  cur != NULL;  cur = cur->Next)
        prev = cur;

    if (prev != NULL)
        prev->Next = A;
    else
        head = A;
}

void print() {
    printf("[");
    struct Node *B = head;
    while (B != NULL) {
        printf(" %d", B->val);
        B = B->Next;
    }
    printf(" ]\n");
}
