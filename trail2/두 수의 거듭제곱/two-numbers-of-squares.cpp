#include <iostream>

using namespace std;

int a, b;

int power(int a, int b);
int main() {
    cin >> a >> b;

    cout<<power(a,b);

    return 0;
}

int power(int a, int b){
    int sum=1;
    for (int i=0;i<b;++i){
         sum*=a;
    }
    return sum;
}