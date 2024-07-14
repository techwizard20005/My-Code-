#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {0,0,4,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(i != j and arr[i]<=arr[j]){
                count++;
            }
        }
        if(arr[i]==count){
        cout<<arr[i];
        break;
        }
        else{
            if(i==(n-1) and arr[n-1] != count){
                cout<<"Nope";
                break;
            }
        }
    
    }
    

}