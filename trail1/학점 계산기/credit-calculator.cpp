#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int size=5;
    int n=0;
    double sum=0;
    cin>>n;
    double arr[size]={};
    for (int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }

    double avr=sum/n;
    cout<<fixed<<setprecision(1)<<avr<<endl;

    if (avr>=4.0)
        cout<<"Perfect";
    else if(avr>=3.0)
        cout<<"Good";
    else
        cout<<"Poor";



    return 0;
}