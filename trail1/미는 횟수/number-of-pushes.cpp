#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int n=0;
    int len =a.length();

    for(int i=0;i<100;++i){
        if(a==b){
            break;
        }
        else{
            char temp=a[(len-1)];
            a=temp+(a.substr(0,len-1));
            ++n;
        }
    }
    if(n==100){
        cout<<-1;
    }
    else{
        cout<<n;
    }
    
    return 0;
}