#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int alen=a.length();
    int cnt=0;

    for(int i=1;i<alen;++i){
        if((a[i-1]==b[0])&&(a[i]==b[1])){
            ++cnt;
        }
    }
    cout<<cnt;


    return 0;
}