#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    string new_str;
    int len=str.length();
    for(int i=0;i<len;++i){
        if(('A'<=str[i]&&str[i]<='Z')){
            cout<<str[i];
        }
        else if('a'<=str[i]&&str[i]<='z'){
            cout<<(char)toupper(str[i]);
        }
    
    }
    return 0;
}