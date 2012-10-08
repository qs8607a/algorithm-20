#include <iostream>

int countTrees(int number){
    if(number <= 1)
        return 1;
    else{
        int sum = 0;
        for(int i=1; i<=number;i++){
            int left  = countTrees(i-1);
            int right = countTrees(number-i);
            sum+=left * right;
        }
        return sum;
    }
}

using namespace std;
int main(){
    int number;
    cin>>number;
    cout<<countTrees(number)<<endl;
    return 0;
}
