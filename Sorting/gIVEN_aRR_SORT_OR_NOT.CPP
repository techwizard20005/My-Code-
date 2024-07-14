#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                flag = false;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"Array is sorted";
    }else{
        cout<<"array is not sorted";
    }
}