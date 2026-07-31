#include <iostream>
#include <string>
using namespace std;

int main() {
    string a="";
    string b="";
    cin>>a>>b;
    string A=a+b;
    string B=b+a;
    int len = A.length();
    string same ="false";
    for(int i=0;i<len;++i){
        if(A[i]!=B[i])
            break;
        else{
            same="true";
        }
    }
    cout<<same;
}