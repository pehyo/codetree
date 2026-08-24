#include <iostream>
#include <string>

using namespace std;

string revert(string A);

int main() {
    string A;
    cin >> A;
    
    if(A==revert(A)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;
}

string revert(string A){
    string revertA;
    for(int i=A.length()-1;i>=0;--i){
        revertA+=A[i];
    }
    return revertA;
}