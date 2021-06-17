#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char data;
    struct node* next;
    };
struct node* head;
void push(char x){
    struct node* temp = (struct node*)malloc(sizeof(temp));
    temp->data=x;
    temp->next=head;
    head=temp;
    }
void pop(){
    head=head->next;
}
    //restring in this finction we will use stack(you can use array implenebtion of stack to reverse a string
void restring(char *ch , int x){
    for(int i=0; i<x;i++){
        push(ch[i]);
        }
        struct node* temp =head;
        int i;
         for( i=0; i<x;i++){
         ch[i]=head->data;
         pop();
        }
    }
int main(){
    head=NULL;
    char n[] ="hello";
    restring(n,strlen(n));
    int i;
    printf("%s",n);
    return 0;
    }
