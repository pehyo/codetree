#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q,num;
    cin>>s>>q;
    string str[100]={};
    int len=s.length();

    for(int i=0;i<q;++i){
        cin>>num;
        if(num==1){
            int a,b;
            cin>>a>>b;
            char temp=s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=temp;
            str[i]=s;
        }
        else if(num==2){
            char x,y;
            cin>>x>>y;
            for(int j=0;j<len;++j){
                if(s[j]==x){
                    s[j]=y;
                }
            }
            str[i]=s;
        }
    }

for(int i=0;i<q;++i){
    cout<<str[i]<<endl;
}

    return 0;
}