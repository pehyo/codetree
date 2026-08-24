#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[50];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if(arr[i]%2==0){
            cout<<arr[i]/2<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}