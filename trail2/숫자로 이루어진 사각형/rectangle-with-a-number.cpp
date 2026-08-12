#include <iostream>
using namespace std;

void print(int n);
int main() {
    int n;
    cin>>n;
    print(n);
    return 0;
}

void print(int n){
    int cnt=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout<<(cnt%9)+1<<" ";
            ++cnt;
            
        }
        cout<<endl;
    }
}