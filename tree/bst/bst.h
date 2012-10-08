#ifndef BST_H
#define BST_H

namespace base{

struct bst_node{
    bst_node *left, *right;
    int value;
};

extern bst_node * insert_node(bst_node ** root, int value);

}

#endif
