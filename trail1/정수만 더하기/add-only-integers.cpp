#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a;
    cin>>a;
    int len=a.length();
    int sum=0;
    for(int i:a){
        if('0'<=i&&i<='9'){
            sum+=(i-48);
        }
    }
    cout<<sum;
    return 0;
}