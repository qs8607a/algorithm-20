#include "bst.h"
#include "stddef.h"
#include <iostream>


namespace base{

bst_node * insert_node(bst_node ** root, int value){
    bst_node * node = new bst_node;
    node->value = value;
    node->left=NULL;
    node->right=NULL;
    if(*root == NULL){
        *root = node;
        return node;
    }
    else{
        if( value <= (*root)->value)
            insert_node(&(*root)->left, value);
        else
            insert_node(&(*root)->right,value);
    }
    return node;
}


void print_bst(bst_node * root){
    if(root == NULL)
        return;
    print_bst(root->left);
    std::cout<<root->value<<std::endl;
    print_bst(root->right);
}

}

/*
int main(){
    int i;
    bst_node * root=NULL;
    while(cin>>i){
       insert_node(&root,i); 
    }

    print_bst(root);
    return 0;
}

*/
