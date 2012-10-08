#include "bst.h"
#include "stddef.h"
#include "limits.h"

using namespace base;
using namespace std;


int maxValue(bst_node * root){
    if(root == NULL)
        return INT_MIN;

    int right = maxValue(root->right);
    int left = maxValue(root->left);

    int max = root->value;
    if(max < right)
        max = right;
    if(max < left)
        max = left;

    return max;

}

int minValue(bst_node * root){
    if(root == NULL)
        return INT_MAX;

    int left = minValue(root->left);
    int right = minValue(root->right);

    int min = root->value;
    if(min > left)
        min = left;
    if(min > right)
        min = right;

    return min;

}


bool isBST(bst_node * root){
    if(root == NULL)
        return  true;

    if(root->left != NULL && maxValue(root->left) > root->value)
        return false;
    if(root->right != NULL && minValue(root->right) <= root->value)
        return false;
    if(!isBST(root->left) || !isBST(root->right))
        return false;

    return true;
}

int main(){
    return 0;
}
