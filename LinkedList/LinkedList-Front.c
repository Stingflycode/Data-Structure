#include <stdio.h>
#include <stdlib.h>
//Declare our linked list:
struct node{
  int ch;
  struct node* link;
};
//we now intiate our head node the node which will identify our likedlist
struct node* head;
//prototype the insert function
void insert(int a);
//prototype the print function
void print();
int main() {
     //set the head to NULL
    head =NULL;
    int x;
    int i,n;
    printf("Enter how many Letter you wish for:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the letter:\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
    
    return 0;
}
//construct out insert function
void insert(int a){
    //we create a new block of memory in the heap here 
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    //store the passed arrgument  in ch 
    temp->ch=a;
    //fill the other room of the created block with the location/link
    //the previous node/block
    temp->link=head;
    //change the head to point to our newly created block
    head=temp;
}
void print(){
     //store the value of the head so we do not lose the head
      struct node* temp1=head; 
      //iterate through the nodes and print the data in it until we hit the NULL value 
      printf("[");
      
      while(temp1->link != NULL){
          printf("%d",temp1->ch);
          //will go to the next node 
          temp1=temp1->link;
    }
    printf("%d",temp1->ch);
     printf("]\n");
}
