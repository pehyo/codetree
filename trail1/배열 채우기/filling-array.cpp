#include <iostream>
using namespace std;

int main() {
    const int size=10;
    int arr[size]={};
    int cnt=0;
    for(int i=0;i<size;++i){
        cin>>arr[i];
        if(arr[i]==0)
            break;
        else
            cnt+=1;
    }

    for(int i =cnt-1;i>=0;--i)
        cout<<arr[i]<<' ';



    return 0;
}