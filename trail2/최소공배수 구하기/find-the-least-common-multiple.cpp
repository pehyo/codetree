#include <iostream>
using namespace std;

int gcd(int n, int m);
void lcd(int n, int m,int gcd);
int main() {
    int n, m;
    cin>>n>>m;
    int gcdv=gcd(n,m);
    lcd(n,m,gcdv);
    return 0;
}

int gcd(int n, int m){
    for(int i=n;i>0;--i){
        if(n%i==0 && m%i==0){
            return i;
        }
    }
}
void lcd(int n, int m,int gcd){
    cout<<n*m/gcd;
}