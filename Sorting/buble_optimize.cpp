#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // bool flag = true;
    for(int i=0;i<n-1;i++){ //o(n) proper bubbelsort 
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}