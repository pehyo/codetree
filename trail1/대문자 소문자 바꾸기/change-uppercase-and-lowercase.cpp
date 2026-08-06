#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin>>s;

    for(int i:s){
        if('a'<=i && i<='z'){
            cout<<(char)(toupper(i));
        }
        else{
            cout<<(char)(tolower(i));
        }
    }


    return 0;
}