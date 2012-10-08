#include "bst.h"
#include "stddef.h"


bst_node * maxNode(bst_node *root){
    if(root == NULL)
        return NULL;
    while(root->right != NULL)
        root=root->right;
    return root;
}


bst_node * minNode(bst_node *root){
    if(root == NULL)
        return NULL;
    while(root->left != NULL)
        root=root->left;
    return root;
}

void treeToList(bst_node * root){
    if(root == NULL)
        return;

    bst_node *min,*max; 
    if(root->left != NULL){
        treeToList(root->left);
        bst_node * left = maxNode(root->left);
        left->rigth = root;
        root->left = left;
        min = minNode(root->left);
    
    }
    else
        min = root;

    if(root->right != NULL){
        treeToList(root->right);
        bst_node * right = minNode(root->right);
        right->left = root;
        root->right = right;
        max = maxNode(root-right);
    }
    else
        max = root;

    max->left = min;
    min->right = max;

}

int main(){
    return 0;
}
