#include <iostream>
using namespace std;

int main() {
        int arr[100]={};
    int N;
    int Q;

    int qarr[100]={};//q 배열 저장
    int q1[100]={};  //q1 저장
    int q2[100]={};  //q2 저장
    int q3[100][2]={};//q3 저장
//N이 들어오면 N을 이용해서 질의 배열 받고
    cin>>N>>Q;

    //숫자 배열 받기
    for(int i=0;i<N;++i)
        cin>>arr[i];

    //Q받기
    for(int i=0;i<Q;++i){
        cin>>qarr[i]; //Q 재활용 중
        if(qarr[i]==1){
            cin>>q1[i];
        }
        else if(qarr[i]==2){
            cin>>q2[i];
        }
        else{
            for(int j=0;j<2;++j){
                cin>>q3[i][j];
            }
        }
    }

    for(int i=0;i<Q;++i){
        if(qarr[i]==1){
            cout<<arr[q1[i]-1]<<endl;
        }
        else if(qarr[i]==2){
            int cnt=0;
            for(int j=0;j<N;++j){
                if(q2[i]==arr[j]){
                    cnt=j+1;
                    break;
                }                    
            }
            cout<<cnt<<endl;
        }
        else{ //q3의 [i][??]인 상태
            int s=q3[i][0]-1;
            int e=q3[i][1]-1;
            for(int k=s;k<=e;++k){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
    }


    //N개의 원소와 q개의 질의
    // 1a - a번째 원소 출력
    // 2b - b원소가 몇번째 원소인지 (여러개면 가장 작은거) --> 한번만 체크하는 알고리즘
        //- 원송 없으면 0출력
    //3 s e - s번째 원소부터 e번째 원소까지 출력 --> for문 작성 시 i<=e로 작성해야지?
    //출력 - q개의 줄에 걸쳐 결과 출력
    return 0;
}