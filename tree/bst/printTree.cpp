#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

void printTree(bst_node * root){
    if(root == NULL)
        return;
    printTree(root->left);
    cout<<root->value<<endl;
    printTree(root->right);
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    printTree(root);

    return 0;
}
