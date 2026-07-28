#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    char al;
    cin>>al;
    
    int cnt=0;
    for(int i=0;i<str.length();++i){
        if(al==str[i])
            ++cnt;
    }

    cout<<cnt;

    return 0;
}