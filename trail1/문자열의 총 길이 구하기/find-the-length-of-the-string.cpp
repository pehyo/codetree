#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n=10;
    string arr[10];
    int sum=0;

    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i].length();
    }

    cout<<sum;
    
    return 0;
}