#include <iostream>
#include <string>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;
    int lenb=B.length();

    while(A.find(B)!=string::npos){
        int idx=A.find(B);
        A.erase(idx,lenb);

    }
    cout<<A;
    
    return 0;
}
