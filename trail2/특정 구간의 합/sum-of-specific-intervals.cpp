#include <iostream>

using namespace std;

int n, m;
int arr[101];
int queryA1[101];
int queryA2[101];
void arrsum(int a, int b,int arr[101]);

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> queryA1[i] >> queryA2[i];
    }

    for (int i=0;i<m;++i){
        arrsum(queryA1[i],queryA2[i],arr);
    }

    return 0;
}

void arrsum(int a, int b,int arr[101]){
    int sum=0;
    for(int i=a;i<=b;++i){
        sum+=arr[i];
    }

    cout<<sum<<endl;
}