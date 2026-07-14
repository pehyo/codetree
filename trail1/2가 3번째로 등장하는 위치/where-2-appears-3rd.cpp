#include <iostream>
using namespace std;

int main() {
    //+1을 해서 출력해야 됨에 유의하자
int arr[100]={};
int idx=0;
int n=0;
int cnt=0;
cin>>n;

for(int i=0;i<n;++i){
    cin>>arr[i];
    if(arr[i]==2){
        ++cnt;
        if(cnt==3)
            idx=i;
    }
}

cout<<idx+1;
    return 0;
}