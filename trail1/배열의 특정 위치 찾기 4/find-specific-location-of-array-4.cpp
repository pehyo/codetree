#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int size =10;
    int arr[size]={};
    int cnt=0;
    double sum=0;

    for(int i=0;i<size;++i){
        cin>>arr[i];

        if (arr[i]==0){
            break;}     
        ++cnt;   
    }

    int even=0;
    for(int i=0;i<cnt;++i){
        if(arr[i]%2 ==0){
            sum+=arr[i];
            ++even;
        }
    }

    cout<<even<<" "<<sum;

    return 0;
}