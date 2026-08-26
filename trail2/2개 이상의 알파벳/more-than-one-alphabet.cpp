#include <iostream>
#include <string>

using namespace std;

bool findal(string A,int& cnt);

int main() {
    string A;
    cin >> A;

    int cnt=0;

    if(findal(A,cnt)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}

bool findal(string A,int& cnt){
    for(int i=0;i<A.length();++i){
        for(int j=1;j<=i;++j){
            if(A[i]==A[j])
                ++cnt;
                break;
        }
    }
    if(A.length()-cnt<2){
        return false;
    }
    else{
        return true;
    }
}