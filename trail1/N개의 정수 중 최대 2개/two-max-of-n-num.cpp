#include <iostream>
using namespace std;

int main(){
    int arr[100]={};
    int sort[100]={};
    int n=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    //제일 큰 값 구하기
    int maxi1=arr[0];
    int maxi_idx=0;
    
    for(int i=0;i<n;++i){
        if(maxi1<=arr[i]){
            maxi1=arr[i];
            maxi_idx=i;
        }
    }

//두번째로 큰 값 찾기위한 배열 만들기
    for(int i=0;i<n;++i){
        if(i==maxi_idx)
            ;
        else{
            sort[i]=arr[i];
        }
    }

    int maxi2=-2147483648;

    for(int i=0;i<n;++i){
        if(i==maxi_idx)
        ;
        else if(maxi2<=sort[i]){
            maxi2=sort[i];
        }
    }    
    cout<<maxi1<<" "<<maxi2;
}