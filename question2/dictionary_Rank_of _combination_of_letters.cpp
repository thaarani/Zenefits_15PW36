#include<iostream>
#include<vector>
#define arrofchar 256
using namespace std;
int func(string str,string s){
    int count=-1;
    for(int i=0;i<s.length();i++){
        if(str[i]==s[i]){
            count++;
        }
    }
    return count;
}

int main(){

int n;
cin>>n;
string s;
cin>>s;
string t=s;
char count[3];
int res=func( t,s);
cout<<res;
}
