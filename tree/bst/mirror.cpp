#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

void mirror(bst_node * root){
    if(root == NULL)
        return;
    bst_node * temp = root -> left;
    root->left = root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }

    mirror(root);

    return 0;
}
