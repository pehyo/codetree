#include <iostream>

using namespace std;
bool findmonth(int month[13],int M,int D);

int main() {
    int M, D;
    cin >> M >> D;
    
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(findmonth(month,M,D)){
        cout<<"Yes";
    }
    else{cout<<"No";}
    return 0;
}

bool findmonth(int month[13],int M,int D){
    if(D<=month[M]){
        return true;
    }
    else{
        return false;
    }
}