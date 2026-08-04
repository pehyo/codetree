#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int len=str.length();
    string str_new=str.substr(1,len-1);
    str_new+=str[0];
    cout<<str_new;
    return 0;
}