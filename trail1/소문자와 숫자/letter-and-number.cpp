#include <iostream>
using namespace std;

int main() {
     string str;
    cin>>str;
    string new_str;
    int len=str.length();
    for(int i=0;i<len;++i){
        if(('A'<=str[i]&&str[i]<='Z')){
            cout<<(char)tolower(str[i]);
        }
        else if('a'<=str[i]&&str[i]<='z'){
            cout<<str[i];
        }
        else if('0'<=str[i]&&str[i]<='9'){
            cout<<str[i];
        }
    
    }

    return 0;
}