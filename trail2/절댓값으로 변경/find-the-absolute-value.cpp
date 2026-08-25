#include <iostream>

using namespace std;

void abst(int n, int arr[50]);
int main() {
    int n;
    int arr[50];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    abst(n,arr);


    return 0;
}

void abst(int n, int arr[50]){
    for(int i=0;i<n;++i){
        if(arr[i]<0){
            cout<<-arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
}