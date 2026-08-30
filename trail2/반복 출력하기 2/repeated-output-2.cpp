#include <iostream>

using namespace std;
void print(int N);

int main() {
    int N;
    cin >> N;
    print(N);

    return 0;
}

void print(int N){
    if(N==0){
        return;
    }

    print(N-1);
    cout<<"HelloWorld"<<endl;
}