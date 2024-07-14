#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr = {7,9,10,8};
    vector<int>arr2 = {7,6,8,5};
    int indx = -1;
    int count = 0;
    sort(arr.begin(),arr.end());
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr2.size();i++){
        if(arr2[i]>=arr[0]){
            indx = i;
            break;
        }
    }
    if(indx == -1) return 0;
    int i = 0;
    int j = indx;
    while(i<=arr.size() and j<= arr2.size()){
        if(arr[i]<=arr2[j]){
        count++;
        i++;
        j++;
        }else{
            j++;
        }
    }cout<<count;
}