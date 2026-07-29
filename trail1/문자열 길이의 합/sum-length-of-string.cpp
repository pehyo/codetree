#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=0;
    cin>>n;

    int sum=0;
    int cnt=0;
    string arr[10];
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i].length();
        if(arr[i][0]=='a'){
            ++cnt;
        }
    }

    cout<<sum<<' '<<cnt;

    return 0;
}