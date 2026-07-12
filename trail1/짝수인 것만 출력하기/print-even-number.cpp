#include <iostream>
using namespace std;

int main() {
    const int size=100;
    int n=0;
    cin>>n;
    int arr[size]={};
    int even_arr[size]={};

    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]%2==0)
            even_arr[i]=arr[i];
    }
    
    for(int i=0;i<n;++i){
        if(even_arr[i]!=0)
            cout<<even_arr[i]<<" ";
    }
    

    return 0;
}