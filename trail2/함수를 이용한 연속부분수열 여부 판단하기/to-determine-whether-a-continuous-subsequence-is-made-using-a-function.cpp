#include <iostream>

using namespace std;
bool findn(int a[100],int b[100],int n1,int n2);

int main() {
    int n1, n2;
    int a[100], b[100];
    
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    if(findn(a,b,n1,n2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}

bool findn(int a[100],int b[100],int n1,int n2){
    bool state =false;
    int cnt=0;
    
    for(int i=0;i<n1-n2+1;++i){
        for(int j=0;j<n2;++j){ //여기 비교 부분을 어떻게 잡지..? 왜 
            if(a[i+j]==b[j]){
                ++cnt;
            }
        }
        if(cnt==n2){
            return true;
        }
        cnt=0;
       
    }
    return false;
}