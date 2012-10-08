#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

int size(bst_node * root){
    if(root == NULL)
        return 0;
    int left = size(root->left);
    int right = size(root->right);
    return left + right + 1;
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    cout<<size(root)<<endl;

    return 0;
}
