#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int n=0;
    cin>>n;
    
    for(int i=0;i<=n;++i){
        cin>>arr[i];
    }
    
    int num[10]={0};
    for(int i=0;i<n;++i){
        num[arr[i]]+=1;
    }

    for(int i=1;i<10;++i)
        cout<<num[i]<<endl;
    return 0;
}