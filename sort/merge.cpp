#include <iostream>

using namespace std;


// from low to high
void merge(int *a, int low, int high){
    if(low>=high)
        return;

    int mid = (high + low ) /2;

    merge(a,low, mid); 
    merge(a,mid+1, high);

    int *aux = new int[high - low +1];
    int i,j;
    int m=0;
    for(i=low,j=mid+1;i<=mid&&j<=high;){
        if(a[i]<a[j]){
            aux[m++] = a[i++];
        }
        else{
            aux[m++] = a[j++];
        }

    }
    
    if(i>mid){
        for(;j<=high;j++)
            aux[m++] = a[j];
    }

    else if (j>high){
        for(;i<=mid;i++)
            aux[m++]=a[i];
    }

    m = 0; 
    for(int i=low;i<=high;i++){
        a[i] = aux[m++];
    }
    delete [] aux;
    aux = NULL;
    return ;
}

int main(){
    int number = 0;
    cin>>number;
    int * a = new int[number+1];

    for(int i=0;i<number;i++){
        cin>>a[i+1];
    }
    merge(a,1,number);
    for(int i=1;i<=number;i++)
        cout<<a[i]<<endl;
    return 0;
}
