#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[10][10]={};
    int num=1;

    for(int i=0;i<m;++i){
        int r=0,c=0;
        cin>>r>>c;
        arr[r][c]=num;
        ++num;
    }

    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}