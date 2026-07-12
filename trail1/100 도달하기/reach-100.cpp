#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int point=0;
    int arr[100]={};
    arr[0]=1;
    arr[1]=n;

    for(int i=2;i<100;++i){
        arr[i]=arr[i-1]+arr[i-2];
        point=i;
        if(arr[i]>=100)
            break;
    }
    for(int i=0;i<=point;++i)
        cout<<arr[i]<<" ";


    return 0;
}