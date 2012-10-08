#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

void printPostorder(bst_node * root){
    if(root == NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->value<<endl;
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    printPostorder(root);

    return 0;
}
