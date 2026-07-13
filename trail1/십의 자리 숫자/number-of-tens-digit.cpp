#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int cnt[10]={};
    for(int i=0;i<100;++i){
        cin>>arr[i];
        if(arr[i]==0)
            break;
        else
            cnt[arr[i]/10]+=1;
    }
    for(int i=1;i<10;++i){
        cout<<i<<" - "<<cnt[i]<<endl;
    }

    return 0;
}