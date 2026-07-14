#include <iostream>
#include <string>
using namespace std;

int main() {
    int arrA[100]={};
    int arrB[100]={};
    int N1,N2;
    int cnt=0;
    string state="No";

    cin>>N1>>N2;

    //for문을 돌 때 n1-n2까지 도는게 맞음!

    for(int i=0;i<N1;++i){
        cin>>arrA[i];
    }

    for(int i=0;i<N1;++i){
        cin>>arrB[i];
    }

    for(int i=0;i<=N1-N2;++i){
        for(int j=0;j<N2;++j){
            if(arrB[j]==arrA[i+j])
                ++cnt;
        }
        if(cnt==N2)
            state="Yes";
        cnt=0;
    }

    cout<<state;
    return 0;
}