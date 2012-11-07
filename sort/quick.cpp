
// quick sort
//
//

#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

void exchange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a, int start, int end){
    if(start >= end)
        return 0;

    int i = start+1;
    int j = end;

    while(i<j){
        for(;a[j] > a[start] && j>=i;j--)
            ;
        for(;a[i] < a[start] && j>=i; i++)
            ;
        if(i<j)
            exchange(&a[i++],&a[j--]);
    }
    exchange(&a[j],&a[start]);
    
    return j;
}


void quick(int *a, int start, int end){
    if(start >= end)
        return ;
    int j = partition(a,start, end);

    quick(a,start,j-1);
    quick(a,j+1,end);
}

int main(){
    int n;
    cin >> n ;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    copy(a,a+n,ostream_iterator<int>(cout," "));
    cout<<endl;

    //int j = partition(a,0,7);
    quick(a,0,n-1);
    copy(a,a+n,ostream_iterator<int>(cout," "));
    cout<<endl;


    return 0;
}
