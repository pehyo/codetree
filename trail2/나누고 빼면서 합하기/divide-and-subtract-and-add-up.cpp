#include <iostream>

using namespace std;


void save(int m,int ma[100],int& cnt);

int main() {
    int n, m;
    int A[100];
    int ma[100]={};
    int cnt=0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    save(m,ma,cnt);


    int sum=0;
    for(int i=0;i<cnt;++i){
        sum+=A[ma[i]-1]; 
    }
    
    sum+=A[m-1];
    cout<<sum;

    return 0;
}

void save(int m,int ma[100],int& cnt){
    while(m>1){
        if(m%2==0){
            ma[cnt]=m/2;
            m=m/2;
            ++cnt;
        }
        else{
            ma[cnt]=m-1;
            m=m-1;
            ++cnt;
        }
    }
}