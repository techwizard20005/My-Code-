#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<"even"<<" ";
        }
        else{
            cout<<"odd"<<" ";
        }
    }
}