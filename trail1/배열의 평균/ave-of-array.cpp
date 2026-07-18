#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][4]={};
    int sum=0;

    for(int i=0;i<2;++i){
        for(int j=0;j<4;++j){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }

    int garo[2]={};
    int sero[4]={};

    for(int i=0;i<2;++i){
        for(int j=0;j<4;++j){
            garo[i]+=arr[i][j];
        }
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<2;++j){
            sero[i]+=arr[j][i];
        }
    }

    for(int i:garo){
        cout<<fixed<<setprecision(1)<<i/4.0<<" "; }
    cout<<endl;

    for(int i:sero){
        cout<<fixed<<setprecision(1)<<i/2.0<<" ";

    }
            cout<<endl;
    cout<<fixed<<setprecision(1)<<sum/8.0;
    return 0;
}