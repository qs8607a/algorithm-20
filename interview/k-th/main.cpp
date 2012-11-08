// find the k-th biggest number of the given array

#include "assert.h"
#include "stdio.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;


void exchange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int partition(int *a, int start, int end){
    if(start >=end)
        return start;

    int i = start+1;
    int j = end;
    while(1){
        while(a[j] > a[start] && j>=i)
            j--;
        while(a[i]<a[start] && j>=i)
            i++;

        if(i<j)
            exchange(&a[i],&a[j]);

        else if(i>=j)
            break;
    }

    if(start< j)
        exchange(&a[start], &a[j]);
    return j;
}


int main(){
    int k;
    int n;

    cin >> k;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    copy(a,a+n,ostream_iterator<int>(cout, " "));
    cout<<endl;
    int start = 0;
    int end = n-1;
    while(1){
        int j = partition(a,start,end);
        if(j == k){
            cout<<a[j]<<endl;
            break; 
        }
        else if(j<k){
            start = j+1;
        }
        else if(j>k){
            end = j-1;
        }
    }
    return 0;
}
