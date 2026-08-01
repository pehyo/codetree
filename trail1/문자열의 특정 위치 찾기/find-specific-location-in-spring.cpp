#include <iostream>
#include <string>
using namespace std;

int main() {
    string str={};
    cin>>str;
    char c;
    cin>>c;

    if(str.find(c,0)==string::npos){
        cout<<"No";
    }
    else
        cout<<str.find(c,0);

    return 0;
}