#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1 = {2,4,6,8};
    int n = v1.size();
    int k =2;
    vector<int>v2;
    vector<int>v3;
    for(int i=1;i<n+k;i++){
        v2[i-1] = i;
    }
    for(int i=0;i<v2.size();i++){
        if(v1[i] != v2[i]){
            v3.push_back(v2[i]);
        }
    }for(int i=0;i<k;i++){
        cout<<v3[i];
    }
    
}