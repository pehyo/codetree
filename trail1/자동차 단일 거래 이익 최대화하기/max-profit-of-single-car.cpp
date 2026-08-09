#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000]={};
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int min=arr[0];
    int max=arr[0];
    //int idx=0;
    int rest=arr[1]-arr[0];
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if((arr[j]-arr[i])>rest){
                rest=(arr[j]-arr[i]);
            }

        }
    }
    if(rest<=0){
        cout<<0;
    }
    else{
        cout<<rest;
    }
/*
    for(int i=1;i<n-1;++i){
        if(arr[i]<min){
            min=arr[i];
            idx=i;
        }
    }
    max=arr[idx+1];
    for(int i=idx+2;i<n;++i){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    if(max-min<=0){
        cout<<0;
    }
    else{
        cout<<max-min;    
    }
    */
    return 0;
}