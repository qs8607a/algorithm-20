#include <iostream>

using namespace std;

void insertion(int *a, int start, int end){
    for(int i=start+1; i<=end;i++){
        int j = i-1;
        int temp = a[i];
        while(j>=start && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    for(int i=start; i<=end; i++)
        cout<<a[i]<< " ";
    cout<<endl;
}

int main(){
    int *a = NULL;
    int number;
    cin>>number;
    a = new int[number+1];
    for(int i=0;i<number;i++)
        cin>>a[i+1];

    insertion(a,1,number);
    return 0;
}
