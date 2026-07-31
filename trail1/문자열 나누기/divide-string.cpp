#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[10]={};
    string str="";
    for (int i=0;i<n;++i){
        cin>>arr[i];
        str+=arr[i];
    }

    int len =str.length();
    
    for(int i=0;i<len;++i){
        cout<<str[i];
        if((i+1)%5==0){
            cout<<endl;
        }
    }
    return 0;
}