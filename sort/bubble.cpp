#include <iostream>

using namespace std;

void bubble(int *a, int start, int end){
    for(int i = start; i<end; i++){
        for(int j = end; j>=i+1;j--){
            if(a[j] < a[j-1]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    for(int i=start; i<=end; i++)
        cout<<a[i] << " ";
    cout<<endl;
}


int main(){
    int *a=NULL;
    int number;
    cin>>number;
    a = new int[number+1];
    
    for(int i=0;i<number;i++)
        cin>>a[i+1];

    bubble(a, 1, number);
    return 0;
}
