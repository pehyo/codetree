#include <iostream>
using namespace std;

int max_val(int max, int num);


int main() {
    int arr[10]={};
    int max;
    for(int i=0;i<10;++i){
        cin>>arr[i]; //이거 포인터로 변환되는거아님?? 아닌가 내가 뭐랑 헷갈린 거지?
        max=max_val(max,arr[i]);
    }
    cout<<max;
    return 0;
}


int max_val(int max, int num){
    if(max<num){
        max=num;
    }
    return max;
}