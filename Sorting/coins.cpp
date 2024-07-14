#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,7,7,9};
    vector<int>v1;
    int target = 8;
    int n = v.size();
    for(int i=0;i<n;i++){
         if(v[i] == target){
            v1.push_back(i);
         }
         else{
            if(i==n-1 and v[i] != target ){
                cout<<"Nope";
            }
         }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    } 
}