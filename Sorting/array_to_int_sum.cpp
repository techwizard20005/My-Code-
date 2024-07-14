#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int arrayToInt(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result * 10 + arr[i];
    }
    return result;
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    int a[n];
    for(int i=0;i<n;i++){
        a[i] = arr[i]; 
    }
    sort(a,a+n);
    sort(arr,arr+n);
    for(int i=n-1;i>0;i--){
        if(arr[i] != arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int num = arrayToInt(a,n);
    int num2 = arrayToInt(arr,n);
    cout<<num+num2;
    
}