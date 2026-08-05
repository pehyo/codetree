#include <iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    if(c=='z')
        cout<<'a';
    else
        cout<<static_cast<char>(c+1);

    return 0;
}