#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool findpattern(int i);
int main() {
    cin >> text;
    cin >> pattern;
    int idx=-1;
    for(int i=0;i<(text.length())-(pattern.length())+1;++i){
        if(findpattern(i)){
            idx=i;
            break;
        }
    }
    cout<<idx;

    return 0;
}

bool findpattern(int i){
    int cnt=0;
    for(int j=0;j<pattern.length();++j){
        if(text[j+i]==pattern[j]){
            ++cnt;
        }
    }
    if(cnt==pattern.length()){
        return true;
    }
    else{
        return false;
    }
}