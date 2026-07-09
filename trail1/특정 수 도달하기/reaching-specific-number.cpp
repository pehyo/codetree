#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10]={};
    int sum=0;
    float cnt=0;

    for (int i=0;i<10;++i){
        cin>>arr[i];
    }

    for (int i =0;i<10;++i){
        
        if (arr[i]<250){
             sum+=arr[i];
            ++cnt;
        }
           
        else
            break;
        
    }
    
    cout<<fixed<<setprecision(1)<<sum<<" "<<sum/cnt;
    return 0;
}