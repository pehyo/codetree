#include <iostream>
using namespace std;

int share(int n);
int main() {
    int n;
    cin>>n;
    cout<<share(n);

    return 0;
}

int share(int n){
    int sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    return sum/10;
}