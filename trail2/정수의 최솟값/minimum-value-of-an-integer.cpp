#include <iostream>
using namespace std;
int findmin(int a,int b,int c);

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<findmin(a,b,c);
    return 0;
}

int findmin(int a,int b,int c){
    int mini=a;
    if(mini>=b){
       mini=b;
    }
    if(mini>=c){
        mini=c;
    }
    return mini;
}