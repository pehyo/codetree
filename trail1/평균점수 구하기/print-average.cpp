#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    const int size=8;
    double arr[size]={};
    double sum=0;

    for(int i=0;i<size;++i){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<fixed<<setprecision(1)<<sum/size;


    return 0;
}