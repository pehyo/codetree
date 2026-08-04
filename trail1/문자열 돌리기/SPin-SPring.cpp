#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int len=str.length();
    char first;
    cout<<str<<endl;

    for(int i=0;i<len;++i){
        first=str[len-1];
        string str_new=first+(str.substr(0,len-1));
        cout<<str_new<<endl;
        str=str_new;
    }
    

    return 0;
}