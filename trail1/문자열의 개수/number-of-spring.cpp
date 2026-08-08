#include <iostream>
#include <string>
using namespace std;

int main() {
    //0나올때 종료되는 반복문
    //문자열 갯수세는 cnt필요
    //무자열 홀수번째 문ㄴ자열들 출력
    string str;
    int cnt=0;
    string arr[200]={};
    for(int i=1;i<=200;++i){
        cin>>str;
        if(str=="0"){
            break;
        }
        else{
        ++cnt;
        arr[i]=str;
        }
    }
    cout<<cnt<<endl;

    for(int i=1;i<=cnt;i+=2){
        cout<<arr[i]<<endl;
    }

    return 0;
}