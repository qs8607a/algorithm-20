#include "PriorityQueue.h"
#include <iostream>

using namespace std;
using namespace base;

int main(){
    PriorityQueue<int> pq;

    int n;
    while(cin>>n){
        pq.push(n);
    }
    
    pq.debug();
    while(pq.size()>1){
        int t;
        pq.pop(t);
        cout<<t<<" ";
    }
    cout<<endl;
    return 0;

}
