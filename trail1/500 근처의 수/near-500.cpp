#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;++i){
        cin>>arr[i];
    }
    int funder[10]={};
    int fover[10]={};
    for(int i=0;i<10;++i){
        if(arr[i]<500){
            funder[i]=arr[i];
        }
        else{
            fover[i]=arr[i];
        }
    }

    int max=0;
    int min=1000;

    for(int i=0;i<10;++i){
        if(funder[i]>=max){
            max=funder[i];
        }
        if(fover[i]<min){
            if(fover[i]==0){
                continue;
            }
            else{
                min=fover[i];
            }
        }
    }
    cout<<max<<" "<<min;
    return 0;
}