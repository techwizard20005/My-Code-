#include<iostream>
#include<algorithm>
using namespace std;
int mian(){
    int arr[] = {5,3,6,2,1};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion sort
    for(int i=1;i<n;i++){
        int j = i;
        // while(arr[j]<arr[j-1] && j>=1) swap(),j--;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else{
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}