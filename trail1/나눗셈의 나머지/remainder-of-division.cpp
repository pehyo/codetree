#include <iostream>
using namespace std;

int main() {
    int arr[10]={};
    int A=0;
    int B=0;
    int sum=0;

    cin>>A>>B;

    while(A>1){
        arr[A%B]+=1;
        A=A/B;
    }

    for(int i=0;i<10;++i){
        sum+=arr[i]*arr[i];
    }
    cout<<sum;

    return 0;
}