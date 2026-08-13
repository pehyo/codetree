#include <iostream>
using namespace std;
void find(int n);

int main() {
    int n;
    cin>>n;
    find(n);
    return 0;
}

void find(int n){
    int sum=0;
    if(n%2==0){
        sum+=n%10;
        sum+=n/10;
        if(sum%5==0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }
}