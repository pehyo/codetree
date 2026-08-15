#include <iostream>
using namespace std;

bool isyear(int y);
int main() {
    int y;
    cin>>y;
    if(isyear(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

bool isyear(int y){
    if(y%4!=0){
        return false;
    }
    if(y%100==0&&y%400!=0){
        return false;
    }
    return true;
}