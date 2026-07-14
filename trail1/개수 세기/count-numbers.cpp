#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int N;
    int M;
    int cnt=0;
    cin>>N>>M;
    for(int i=0;i<N;++i){
        cin>>arr[i];
        if(arr[i]==M)
            ++cnt;
    }

    cout<<cnt;
    return 0;
}