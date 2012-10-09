#include <iostream>

using namespace std;

void selection(int *a,int start, int end){
    for(int i=start; i<=end; i++){
        int min = a[i];
        int index = i;
        for(int j=i+1; j<=end; j++){
            if(a[j] < min)
            {
                index = j;
                min = a[j];
            }
                
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }

    for(int i=start; i<=end; i++)
        cout<<a[i]<< " "<<endl;

}

int main(){
    int *a = NULL;
    int n;
    cin>>n;
    a = new int[n+1];

    for(int i=0 ;i<n;i ++){
        int d;
        cin>>d;
        a[i+1] = d;
    }

    selection(a, 1, n);
    return 0;
}
