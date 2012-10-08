#include "bst.h" 
#include "stddef.h"
#include <iostream>

using namespace base;
using namespace std;

bool hasPathSum(bst_node * root, int sum){
    if(root == NULL)
        return false;

    if(root->value > sum)
        return false;

    if(root->value == sum && root->right == NULL && root->left == NULL)
        return true;

    bool left = hasPathSum(root->left, sum - root->value);
    bool right = hasPathSum(root->right, sum - root->value);
    if(left == true || right == true)
        return true;
    else
        return false;

}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    cout<<hasPathSum(root,10);

    return 0;
}
