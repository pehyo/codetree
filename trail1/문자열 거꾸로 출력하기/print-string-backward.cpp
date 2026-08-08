#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    for(int i=0;i<10;++i){
        cin>>str;
        if(str=="END"){
            break;
        }
        else{
            int len=str.length();
            for(int j=len-1;j>=0;--j){
                cout<<str[j];
            }
            cout<<endl;
        }
    }

    return 0;
}