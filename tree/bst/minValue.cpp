#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

int minValue(bst_node * root){
    if(root == NULL)
        return -1;
    while(root->left!=NULL)
        root = root->left;
    return root->value;
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    cout<<minValue(root)<<endl;

    return 0;
}
