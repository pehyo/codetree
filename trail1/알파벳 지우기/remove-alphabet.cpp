#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    string numa,numb;


    for(int i:a){
        if('0'<=i&&i<='9')
            numa+=i;
    }

    for(int i:b){
        if('0'<=i&&i<='9')
            numb+=i;
    }

    cout<<stoi(numa)+stoi(numb);

    return 0;
}