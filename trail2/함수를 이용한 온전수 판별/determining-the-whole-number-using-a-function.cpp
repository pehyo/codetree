#include <iostream>
using namespace std;

int find(int i);

int main() {
    int a,b;
    int cnt=0;
    cin>>a>>b;
    for(int i=a;i<=b;++i){
        cnt+=find(i);
    }
    cout<<cnt;

    return 0;
}

int find(int i){
    if(i%2==0){
        return 0;
    }
    else if(i%3==0&& i%9!=0){
        return 0;
    }
    else if(i%10==5){
        return 0;
    }
    else{
        return 1;
    }
}