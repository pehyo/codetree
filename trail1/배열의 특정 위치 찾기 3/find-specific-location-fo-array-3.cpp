#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int cnt=0;
    int sum=0;

    for (int i=0;i<100;++i){
        cin>>arr[i];
        ++cnt;
        if(arr[i]==0)
            break;
    }

    for (int i=cnt-2;i>=cnt-4;--i)
        sum+=arr[i];
    cout<<sum;
    return 0;
}