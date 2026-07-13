#include <iostream>
using namespace std;

int main() {
    char state[3]={};
    int temp[3]={};
    //ABCD 가 인덱스 순서
    int hos[4]={};

    //1)환자 정보 저장
    for(int i=0;i<3;++i){
        cin>>state[i]>>temp[i];
    }

    //2)인덱스 돌면서 분류 진료소 인원 추가
    for(int i=0;i<3;++i){
        if((state[i]=='Y') && (temp[i]>=37)){
            hos[0]+=1;
        }
        else if((state[i]=='N')&&(temp[i]>=37)){
            hos[1]+=1;
        }
        else if((state[i]=='Y') && (temp[i]<37)){
            hos[2]+=1;
        }
        else{
            hos[3]+=1;
        }
    }
    
    //3)진료소 A숫자 세면서 E인지 분류하기
    for(int i=0;i<4;++i){
        cout<<hos[i]<<" ";
    }

    if(hos[0]>=2){
        cout<<'E';
    }
    return 0;
}