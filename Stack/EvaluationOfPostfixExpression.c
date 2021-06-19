#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 101
int A[MAX];
int top=-1;
void push(int x){
    A[++top]=x;
    }
void pop(){
    --top;
    }
void print(){
  int i;
  for(i=0; i<=top;i++){
      printf("%d ",A[i]);
      }
    }
int Top(){
    return A[top];
    }
int str2int(char *numStr)
{
    int intVal=0 ;

    while(*numStr != ' ')
    {
        intVal *= 10;
        intVal  += *numStr - '0'; //0x30 ascii value of charater 0
        numStr++;
    } 
    return intVal;
}
int EvaluatePostfix(char* x, int n);
bool Isdigit(char x);
bool Isoperator(char x);
int PerformOperation(char operation, int operand1, int operand2);
int main(){
    int len;
    char * a ="2 3 * 5 4 * + 9 -"; //17
    len= strlen(a);
    print();
    EvaluatePostfix(a,len);
    print();
    return 0;
    }
int EvaluatePostfix(char* x,int n){
    int i;
    for (i=0;i<n;i++){
        if(x[i]==' ' || x[i]==',') continue;
        else if(Isoperator(x[i])){
            int op1=Top();
            pop();
            int op2 =Top();
            pop();
            int result =  PerformOperation(x[i],op1,op2);
            push(result);
            }
         else if(Isdigit(x[i])){
             int operand=0;
             operand=str2int(&x[i]);
             push(operand);
             }
        }
        return Top();
    }
bool Isdigit(char x){
    if(x >= '0' || x<= '9') return true;
    else return false;
    }
bool Isoperator(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/') return true;
    else return false;
    }
int PerformOperation(char operation, int operand1, int operand2){
    if(operation == '+') return operand1 +operand2;
	else if(operation == '-' && operand1> operand2 ) return operand1-operand2;
    else if (operation == '-' && operand1 < operand2)  return operand2-operand1;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;
	else printf("Unexpected Error \n");
	return -1; 
    }
