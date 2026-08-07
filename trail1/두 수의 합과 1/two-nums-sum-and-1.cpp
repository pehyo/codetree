#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int sum=a+b;
    string stsum=to_string(sum);
    int cnt=0;
    for(int i:stsum){
        if(i=='1') ++cnt;
    }
    cout<<cnt;

    return 0;
}