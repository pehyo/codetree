#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin>>a;
    string order;
    cin>>order;
    int order_len=order.length();
    int lena=a.length();

    for(int i=0;i<order_len;++i){
        string new_a="";//새로 만들어지는 문자열 임시저장
       if(order[i]=='R'){
            new_a+=a[lena-1];
            new_a+=a.substr(0,lena-1);
       }
       else{
            new_a+=a.substr(1,lena-1);
            new_a+=a[0];
       }
       a=new_a;//바뀐 a로 갱신       
    }
    cout<<a;

    return 0;
}