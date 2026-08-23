#include <iostream>

using namespace std;
bool isyear(int Y);

int main() {

    int Y, M, D;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> Y >> M >> D;
    if(isyear(Y)){
        month[2]=29;
    }
    if(month[M]<D){
        cout<<-1;
    }
    else{
        if(3<=M&&M<=5){
            cout<<"Spring";
        }
        else if(6<=M && M<=8){
            cout<<"Summer";
        }
        else if(9<=M && M<=11){
            cout<<"Fall";
        }
        else{
            cout<<"Winter";
        }
    }


    return 0;
}

bool isyear(int Y){
    if(Y%4!=0){
        return false;
    }
    if(Y%100==0&&Y%400!=0){
        return false;
    }
    return true;
}