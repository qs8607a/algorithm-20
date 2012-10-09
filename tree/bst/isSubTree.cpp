#include "bst.h"
#include <iostream>

using namespace base;
using namespace std;


bst_node * find(bst_node *a, int value){
    if(a == NULL)
        return NULL;
    while(a && a->value != value){
        if(a->value < value)
            a=a->right;

        else if(a->value > value)
            a = a->left;
    }
    return a;
}

bool compare(bst_node *a, bst_node *b){
    if(a==NULL && b == NULL)
        return true;
    if(a!=NULL && b!=NULL){
        if(a->value == b->value && compare(a->left,b->left) && compare(a->right,b->right))
            return true;
        else
            return false;
    }
    else
        return false;
}

bool isSubTree(bst_node * a, bst_node *b){
    if(a == NULL && b == NULL)
        return true;
    if(a == NULL)
        return false;
    if(b == NULL)
        return true;

    bst_node * n = find(a,b->value);
    if(n == NULL)
        return false;
    if(compare(n,b) == true)
        return true;
    else
        return false;

}


int main(){
    return 0;
}
