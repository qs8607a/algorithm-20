#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

void doubleTree(bst_node * root){
    if(root == NULL)
        return;
    doubleTree(root->left);
    doubleTree(root->right);

    bst_node * temp = root->left;
    bst_node * node = new bst_node;
    node->value = root->value;
    node->right = NULL;
    node->left = temp;
    root->left = node;
    return ;

}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }

    doubleTree(root);

    return 0;
}
