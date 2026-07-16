#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int arr[10]={};
    for(int i=0;i<n;++i)
        cin>>arr[i];
    
    int mini=99;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(abs(arr[j]-arr[i])<mini)
                mini=abs(arr[i]-arr[j]);
        }
    }
    cout<<mini;
    
    return 0;
}