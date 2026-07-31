#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[10]={};
    string str="";
    for(int i=0;i<n;++i){
        cin>>arr[i];
        str+=arr[i];
    }

    cout<<str;
    return 0;
}