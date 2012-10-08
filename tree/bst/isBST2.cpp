#include "bst.h"
#include "stddef.h"
#include "limits.h"

using namespace base;
using namespace std;

bool isBSTRecur(struct bst_node* node, int min, int max) { 
    if(node == NULL)
        return true;
    if(node->value < min || node->value >= max)
        return false;

    if(isBSTRecur(node->left,min, node->value+1) && isBSTRecur(node->right, node->value,max))
        return true;
    else
        return false;
    
}

bool isBST2(struct bst_node* node) { 
      return(isBSTRecur(node, INT_MIN, INT_MAX)); 
}


int main(){
    return 0;
}
