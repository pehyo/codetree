#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int arr[10][10]={};
    int std=(n-1)%2; //얘랑 같으면 올라가야함
    int num=1;

    void up(int& num, int arr[][10],int n,int j);
    void down(int& num, int arr[][10],int n,int j);

    for(int j=n-1;j>=0;--j){//열의 수를 줄이면서 00이면 끝나는프로그램
        if(std==j%2){
            up(num,arr,n,j);
        }
        else{
            down(num,arr,n,j);
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


    void up(int& num, int arr[][10],int n,int j){
        for(int i=n-1;i>=0;--i){
                arr[i][j]=num;
                ++num;
            }
    }

    void down(int& num, int arr[][10],int n,int j){
        for(int i=0;i<n;++i){
                arr[i][j]=num;
                ++num;
            }
    }