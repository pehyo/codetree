#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int n=0;
    int arr[10]={};
    cin>>n;
    if(n%5==0)
        ++cnt;
    arr[0]=n;
    cout<<arr[0]<<" ";

    for(int i=1;i<10;++i){
        arr[i]=arr[0]*(i+1);
        cout<<arr[i]<<" ";
        if(arr[i]%5==0){
            ++cnt;
            if (cnt==2)
                break;
}
        
    }
    
    return 0;
}