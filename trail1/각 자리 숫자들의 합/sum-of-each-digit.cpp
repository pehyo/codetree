#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string stn=to_string(n);
    int sum=0;
    for(int i:stn){
        sum+=(i-'0');
    }
    cout<<sum;
    return 0;
}