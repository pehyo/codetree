#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int cnt[11]={};
    for(int i=0;i<100;++i){
        cin>>arr[i];
        if(arr[i]==0)
            break;
        else
            cnt[arr[i]/10]+=1;
    }
    for(int i=10;i>=1;--i){
        cout<<i*10<<" - "<<cnt[i]<<endl;
    }

    return 0;
}