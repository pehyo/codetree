#include <iostream>
#include <string>
using namespace std;

int main() {
    string str="";
    cin>>str;
    int len = str.length();
    int eecnt=0,ebcnt=0;

    for(int i=1;i<len;++i){
        if((str[i-1]=='e')&&(str[i]=='e')){
            ++eecnt;
        }
        if((str[i-1]=='e')&&(str[i]=='b')){
            ++ebcnt;
        }
    }

    cout<<eecnt<<" "<<ebcnt;

    return 0;
}