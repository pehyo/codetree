#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;
    string str2;
    cin>>str1>>str2;

    if((str1.length())==(str2.length())){ //.의 연산순위가 낮다는거 기억하기!!
        cout<<"same";
    }

    else if((str1.length())>(str2.length())){
        cout<<str1<<" "<<str1.length();
    }

    else{
        cout<<str2<<" "<<str2.length();
    }

    return 0;
}