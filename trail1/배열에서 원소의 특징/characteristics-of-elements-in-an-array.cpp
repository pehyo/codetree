#include <iostream>
using namespace std;

int main() {
    const int size=10;
    int cnt=0;
    int arr[size]={};

    for (int i=0;i<size;++i){
        cin>>arr[i];
        ++cnt;
        if(arr[i]%3==0)
            break;

}
cout<<arr[cnt-2];

    return 0;
}