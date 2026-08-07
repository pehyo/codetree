#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;++i){
        int j;
        cin>>j;
        sum+=j;
    }

    string stsum=to_string(sum);
    char last=stsum[0];
    cout<<stsum.substr(1)+last;


    return 0;
}