#include <iostream>
using namespace std;

int main() {
    int arr[16][16]={};
    int n=0;
    cin>>n;
    /*
    for(int i=0;i<n;++i){
        arr[0][i]=1;
        arr[i][0]=1;
    }*/
    arr[1][1]=1;
    for(int i=2;i<=n;++i){
        for(int j=1;j<=i;++j){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}