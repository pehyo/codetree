#include <iostream>

using namespace std;

void maxi(int& a, int& b);

int main() {

    int a, b;
    cin >> a >> b;
    maxi(a,b);//a가 큰거

    return 0;
}

void maxi(int& a, int& b){
    if(b>=a){
        cout<<a*2<<" ";
        cout<<b+25;
    }
    else{
        cout<<a+25<<" ";
        cout<<b*2;
    }

    
}