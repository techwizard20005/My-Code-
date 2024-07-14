#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "AZYZXBDJKX";
    string s;
    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i]>= 'X'){
            s.push_back(str[i]);
        }
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}