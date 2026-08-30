#include <iostream>

using namespace std;
void printA(int N);
void printB(int N);
int main() {
    int N;
    cin >> N;
    printA(N);
    cout<<endl;
    printB(N);

    return 0;
}

void printA(int N){
    if(N==0){
        return;
    }
    printA(N-1);
    cout<<N<<" ";

}

void printB(int N){
    if(N==0){
        return;
    }
    cout<<N<<" ";
    printB(N-1);
}