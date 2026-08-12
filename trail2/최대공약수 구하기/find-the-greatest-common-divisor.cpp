#include <iostream>
using namespace std;

void gcm(int n,int m);
int main() {
    int n,m;
    cin>>n>>m;
    gcm(n,m);

    return 0;
}

void gcm(int n,int m){
    for(int i=n;i>0;--i){
        if(n%i==0 && m%i==0){
            cout<<i;
            break;
        }
    }
}