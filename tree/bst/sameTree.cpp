#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

bool sameTree(bst_node * a, bst_node * b){
    if(a == NULL && b == NULL)
        return true;
    if(a != NULL && b != NULL){
        if(sameTree(a->left,b->left) && sameTree(a->right, b->right) && a->value == b->value)
            return true;
        return false;
    }
    else
        return false;

}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }

    sameTree(root, root);

    return 0;
}
