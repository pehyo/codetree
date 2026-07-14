#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int n;
    int cnt=0;

    cin>>n;
    cin>>arr[0];
    int mini=arr[0];
    for(int i=1;i<n;++i){
        cin>>arr[i];
        if(arr[i]<mini){
            mini=arr[i];
        }
    }

    for(int i=0;i<n;++i){
        if(arr[i]==mini)
            ++cnt;
    }
    cout<<mini<<" "<<cnt;
    return 0;
}