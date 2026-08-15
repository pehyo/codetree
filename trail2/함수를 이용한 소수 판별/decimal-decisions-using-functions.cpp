#include <iostream>
using namespace std;

bool isprime(int i);
int main() {
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;++i){
        if(isprime(i)){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}

bool isprime(int i){
    for(int j=2;j<=i-1;++j){
        if(i%j==0){
            return false;
        }        
    }
    return true;
}