#include <iostream>
#include <string>

using namespace std;
void isfind(int i, int& sum);
bool isprime(int i);

int main() {
    int a, b;
    cin >> a >> b;
    int sum=0;
    for(int i=a;i<=b;++i){
        if(isprime(i)){
            isfind(i,sum);
        }
    }
    cout<<sum;

    return 0;
}

void isfind(int i,int& sum){
    string s=to_string(i);
    int rest=0;
    for(int j=0;j<s.length();++j){
        rest+=s[j]-48;
    }
    if(rest%2==0){
        ++sum;
    }
    else{
        sum+=0;
    }

}

bool isprime(int i){
    for(int j=2;j<i;++j){
        if(i%j==0){
            return false;
        }
    
    }
    return true;
}