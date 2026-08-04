#include <iostream>
#include <string>

using namespace std;


int main() {
    string input_str;
    int q;

    cin >> input_str >> q;
    int len=input_str.length();
    
    for (int i = 0; i < q; i++) {
        string new_str="";
        int query_type;

        cin >> query_type;

        if(query_type==1){
            new_str=input_str.substr(1,len-1)+input_str[0];
        }
        else if(query_type==2){
            new_str=input_str[len-1]+input_str.substr(0,len-1);
        }
        else{
            for(int j=len-1;j>=0;--j){
                new_str+=input_str[j];
            }
        }
        input_str=new_str;
        cout<<input_str<<endl;
    }
    

    return 0;
}
