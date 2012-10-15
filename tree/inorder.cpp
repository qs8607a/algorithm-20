#include <iostream>
#include <stack>


using namespace std;


struct tree{
    int value;
    tree * left;
    tree * right;
};

void inorder(tree * t){
    stack<tree*> s;
    while(t!=NULL){
        s.push(t);
        t=t->left;
    }
    while(!s.empty()){
        tree * p = s.top();
        s.pop();
        cout<<p->value<<endl;

        tree * r = p->right;
        while(r!=NULL){
            s.push(r);
            r = r->left;
        }

    }

}


tree * newNode(int value){
    tree * p = new tree;
    p->value = value;
    p->left = NULL;
    p->right = NULL;
    return p;
}

int main(){
    tree *t = newNode(10);
    t->left=newNode(4);
    t->right=newNode(7);

    t->left->left = newNode(6);
    t->left->right = newNode(1);

    t->right->right = newNode(8);
    
    inorder(t);

    return 0;
}
