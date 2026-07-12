#include <iostream>
using namespace std;

int main() {
    const int size=100;
    int arr[size]={};
    int n=0;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=0;i<n;++i){
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<" ";
}

    return 0;
}