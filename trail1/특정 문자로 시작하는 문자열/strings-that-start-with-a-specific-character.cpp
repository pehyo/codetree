#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[20];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    char c;
    cin>>c;
    int cnt=0;
    float sum=0;

    for(int i=0;i<n;++i){
        if(arr[i][0]==c){
            ++cnt;
            sum+=(arr[i].length());
        }
    }

    cout<<fixed<<setprecision(2)<<cnt<<" "<<sum/cnt;
    return 0;
}