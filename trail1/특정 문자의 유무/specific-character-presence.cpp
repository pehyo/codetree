#include <iostream>
#include <string>
using namespace std;

int main() {
    string str={};
    cin>>str;
    int len =str.length();
    bool ee=false,ab=false;

    for(int i=0;i<len;++i){
        if(str.substr(i,2)=="ee"){
            ee=true;
        }
        else if(str.substr(i,2)=="ab"){
            ab=true;
        }
    }

    if(ee){
        cout<<"Yes"<<" ";
    }
    else{
        cout<<"No"<<" ";
    }

    if(ab){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}