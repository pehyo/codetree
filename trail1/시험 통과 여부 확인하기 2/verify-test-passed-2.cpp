#include <iostream>
using namespace std;

class Student{
    private:
        int score[4]={};
        double sum=0;
    public:
        void get_score();
        double get_avr();
};


void Student:: get_score(){
    for(int i=0;i<4;++i){
        cin>>score[i];
    }
}

double Student::get_avr(){
    for(int i=0;i<4;++i){
    sum+=   score[i];
    }
    return sum/4;
}

int main() {
    int cnt=0;
    double arr[10]={};
    int N=0;
    cin>>N;
    for(int i =0;i<N;++i){
        Student s1;
        s1.get_score();
        arr[i]=s1.get_avr();
    }

    for(int i=0;i<N;++i){
        if (arr[i]>=60){
            cout<<"pass"<<endl;
            cnt++;
        }
            
        else
            cout<<"fail"<<endl;
    }
    cout<<cnt;
    // 60점 이상인지 if문 만들어야함
// 학생 수 셀 cnt필요
// 한 학생마다 필요한 배열의 수
//한 학생의 점수 저장할 배열


    return 0;
}