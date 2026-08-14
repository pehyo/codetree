#include <iostream>
using namespace std;
void check(int a,int b,int& cnt);
bool find369(int i);
bool findthree(int i);

int main() {
    int a,b;
    cin>>a>>b;
    int cnt=0;
    check(a,b,cnt);
    cout<<cnt;
    return 0;
}

void check(int a,int b,int& cnt){
    for(int i=a;i<=b;++i){
        if(find369(i)||findthree(i)){
            ++cnt;
        }
    }
    
}

bool find369(int i){
    string k=to_string(i);
    int len=k.length();
    bool status=false;
    for(int j=0;j<len;++j){
        if(k[j]=='3'||k[j]=='6'||k[j]=='9'){
            status=true;
        }
    }
    return status;
}

bool findthree(int i){
    if(i%3==0){
        return true;
    }
    else{
        return false;
    }
}