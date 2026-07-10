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
        else{
            ++cnt;
            sum+=arr[i];
        }
        
    }

    cout<<sum<<" ";
    cout<<fixed<<setprecision(1)<<sum/cnt;


    return 0;
}