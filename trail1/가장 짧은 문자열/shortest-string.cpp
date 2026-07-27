#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int len1=str1.length();
    int len2=str2.length();
    int len3=str3.length();

    int maxi=len1;
    int mini=len1;

    if(maxi<=len2){
        maxi=len2;
    }
        
    if(maxi<=len3)
        maxi=len3;

    if(mini>=len2)
        mini=len2;
    if(mini>=len3)
        mini=len3;

    cout<<maxi-mini;
    

    return 0;
}