#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int len =str.length();
    string rle=""; //최종 출력할 문자열
    int cnt=0;

    string alpha="";//알파벳 저장할 문자열
    int num[1000]={}; //연속 수 저장할 배열
    int numcnt=0; //숫자 총 갯수 셀 변수

    if ((str.length())==1){
        cout<<2<<endl<<str<<1;
    }

else{
    for(int i=1;i<len;++i){
        if(str[i-1]!=str[i]){
            alpha+=str[i-1];
            num[numcnt]=cnt;
            cnt=0;
            ++numcnt;
        }
        else{
            ++cnt;
        }
        if(i==(len-1)){
            if(str[i-1]!=str[i]){
                alpha+=str[i];
                num[numcnt]=cnt;
                ++numcnt;
            }
            else{
                alpha+=str[i];
                num[numcnt]=cnt;
                ++numcnt;

            }
        }
    }

    numcnt=0;//위 변수를재활용 해주겠습니다.
    for(int i=0;i<alpha.length();++i){
        //자릿수 세는거 만들어야된다! 맞네 여기서 코딩 잘못헸네
        int digit=0;
        int nums=num[i]+1;
        while(nums/10>0){
            nums=nums/10;
            ++digit;
        }
        numcnt+=digit+1; 
    }
    cout<<numcnt+(alpha.length())<<endl;

    for(int i=0;i<alpha.length();++i){
        cout<<alpha[i]<<(num[i]+1);
    }
}
    
    return 0;
}