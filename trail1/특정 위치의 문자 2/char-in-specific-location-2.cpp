#include <iostream>
using namespace std;

int main() {
    const int size=10;
    char arr[size]={};

    for(int i=0;i<size;++i)
        cin>>arr[i];
    cout<<arr[1]<<" "<<arr[4]<<" "<<arr[7];
    return 0;
}