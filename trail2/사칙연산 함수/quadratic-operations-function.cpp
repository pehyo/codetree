#include <iostream>
#include <string>

using namespace std;

void cal(int a,int b,string o);

int main(){
    int a,b;
    string o;
    cin>>a>>o>>b;
    cal(a,b,o);
}

void cal(int a,int b,string o){
    if(o=="+"){
        cout<<a<<" "<<o<<" "<<b<<" "<<"="<<" "<<a+b;
    }
    else if(o=="-"){
        cout<<a<<" "<<o<<" "<<b<<" "<<"="<<" "<<a-b;
    }
    else if(o=="*"){
        cout<<a<<" "<<o<<" "<<b<<" "<<"="<<" "<<a*b;
    }
else if(o=="/"){
        cout<<a<<" "<<o<<" "<<b<<" "<<"="<<" "<<a/b;
    }
else{
    cout<<"False";
}
}