#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    const int size =10;
    int even_sum=0;
    int three_sum=0;
    int arr[size]={};
    for(int i=0;i<size;++i)
        cin>>arr[i];

    for(int i=1;i<size;i+=2)
        even_sum+=arr[i];
    for(int i=2;i<size;i+=3)
        three_sum+=arr[i];

    cout<<fixed<<setprecision(1)<<even_sum<<" "<<three_sum/3.0;
    return 0;
}