#include <iostream>
using namespace std;

int main() {
    const int size=10;
    int arr[10]={};
    for(int& i:arr){
        cin>>i;
    }
    cout<<arr[2]+arr[4]+arr[9];
    return 0;
}