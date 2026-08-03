#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin>>s;
    int len=(s.length());

    for(int i=len;i>1;--i){
        cin>>n;
        if(n>=i){
            s.erase(i-1,1);
        }
        else{
            s.erase(n,1);
        }
        cout<<s<<endl;
    }  

    return 0;
}