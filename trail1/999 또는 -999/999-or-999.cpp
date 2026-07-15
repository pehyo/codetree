#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    cin>>arr[0];
    int mini=arr[0];
    int maxi=arr[0];

    for(int i=1;i<100;++i){
        cin>>arr[i];
        if((arr[i]==999)||(arr[i]==-999))
            break;
        if(mini>arr[i])
            mini=arr[i];
        if(maxi<arr[i])
            maxi=arr[i];
    }

    cout<<maxi<<" "<<mini;

    return 0;
}