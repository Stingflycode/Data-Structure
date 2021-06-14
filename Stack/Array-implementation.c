#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

int A[MAX_SIZE];
int top =-1;

void push(int x){
    if(top == MAX_SIZE-1){
        printf("There is no space available in the stack");
        return;
        }
        A[++top]=x;
    }
void pop(){
    if(top == -1){
        printf("The stack is empty");
        return;
        }
        top--;
    }
 int Top(){
     return A[top];
     }

int IsEmpty(){
    if(top == -1) return 1;
    return 0;
    }
void print(){
    printf("[");
    int i;
    for(i=0;i<=top;i++){
        printf("%d ", A[i]);
        }
    printf("]\n");
    }
int main(){
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    pop();
    pop();
    print();
    printf("%d %d",IsEmpty(),Top());
    return 0;
    }