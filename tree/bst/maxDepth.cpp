#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

int maxDepth(bst_node * root){
    if(root == NULL)
        return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if(left > right)
        return left + 1;
    else
        return right + 1;
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    cout<<maxDepth(root)<<endl;

    return 0;
}
