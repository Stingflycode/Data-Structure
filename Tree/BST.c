#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>  
struct Bstnode{
    int data;
    struct Bstnode* left;
    struct Bstnode* right;
    };
struct Bstnode* GetNewNode(int data){
    struct Bstnode* temp = (struct Bstnode*)malloc(sizeof(temp));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
    }
struct Bstnode* Insert(struct Bstnode* root , int data){
    if(root==NULL){
        root=GetNewNode(data);
        return root;
        }
    else if(data<=root->data){
        root->left= Insert(root->left,data);
        }
    else {
        root->right=Insert(root->right,data);
        }
        return root;
    }
bool search(struct Bstnode* root , int data){
    if(root==NULL){
        return false;
        }
    if(root->data ==data){
        return true;
        }
    else if(data <= root->data){
         return search(root->left,data);
        }
   else {
       return search(root->right,data);
       }
    }
int FindMin(struct Bstnode*  root){
    while (root->left != NULL){
        root=root->left;
        }
        return root->data;
    }
int FindMax(struct Bstnode*  root){
    while (root->right != NULL){
        root=root->right;
        }
        return root->data;
    }

int main(){
    struct BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
    print(root);
    return 0;
    }
