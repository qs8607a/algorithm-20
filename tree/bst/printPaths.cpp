#include "bst.h" 
#include "stddef.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace base;
using namespace std;

vector<string> printPaths(bst_node * root){
    vector<string> result;
    if(root==NULL)
        return result;

    if(root->left == NULL && root->right == NULL)
    {
        ostringstream oo;
        oo<<root->value;
        result.push_back(oo.str());
        return result;
    }

    vector<string> left = printPaths(root->left);
    vector<string> right= printPaths(root->right);

    for(unsigned int i=0; i<left.size(); i++){
        ostringstream oo;
        oo << root->value << " " << left[i]; 
        result.push_back(oo.str());
    }

    for(unsigned int i=0; i<right.size(); i++){
        ostringstream oo;
        oo << root->value << " " << right[i]; 
        result.push_back(oo.str());
    }

    return result;
}

int main(){

    int i;
    bst_node * root=NULL;
    while(cin>>i){
        insert_node(&root,i); 
    }
    
    vector<string> paths = printPaths(root);
    for(unsigned int i = 0; i<paths.size(); i++)
        cout<<paths[i]<<endl;

    return 0;
}
