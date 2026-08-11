#include <iostream>
using namespace std;
void print();

int main() {
   for(int i=0;i<5;++i){
    print();
   }
    return 0;
}

void print(){
    for(int i=0;i<10;++i){
        cout<<'*';
    }
    cout<<endl;
}