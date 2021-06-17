#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct nodestack {
    char data;
    struct nodestack* next;
    };
struct nodestack* headstack; 
int top=0;
void push(char x){
    struct nodestack* temp = (struct nodestack*)malloc(sizeof(temp));
    if(headstack == NULL){
        temp->data=x;
        temp->next=NULL;
        headstack =temp;
        return;
        }
    struct nodestack* temp0 = headstack;
    while(headstack->next != NULL){
       temp0=temp0->next;
        }
    temp->data=x;
    temp0->next=temp;
    temp->next=NULL;
    --top;
    }
void pop(){
    headstack=headstack->next;
    --top;
}
bool empty(){
    if(top == 0){
        return true;
        }
    return false;
    }
bool Arepair(char opening,char closing){
    if(opening == '(' && closing == ')')
    return true;
	else 
        if(opening == '{' && closing == '}') 
            return true;
	else 
        if(opening == '[' && closing == ']') 
            return true;
	return false;
    }
bool AreParanthesesBalanced(char* x, int n){
    int i;
    for (i=0;i<n;i++){
        if ( x[i] == "(" ||  x[i] == "[" || x[i] == "{" )
            push(x[i]);
            else if ( x[i] == ")" ||  x[i] == "]" || x[i] == "}" ){
                if(empty() || !Arepair(headstack->data,x[i]))
                    return false;
                else
                    pop();
                }
        }
       return empty();
    
    }
int main(){
    headstack =NULL;
    char *c ="{(A+b)+[c]}";
    printf("%d\n",AreParanthesesBalanced(c,strlen(c)));
    //1 for true so they are ballenced 
    //0 for flase 
    return 0;
    }
//Note : one of the features of stack is you can push in O(1) time but here as we insert at the end of Linkedlist it takes O(n) so if you want that time complexity you can use array instead of 
//linkedList but here I use LinkedList because it is more dynamic and it will save memory_order
