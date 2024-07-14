#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,7,1,4,6,3,9};
    int k = 2;
    int n = 7;
    int mindx = -1;
    for(int i=0;i<n;i++){
        int min = arr[i];
        int mindx = i;
        for(int j=i;j<n;j++){ 
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
}