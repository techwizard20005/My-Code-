#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,2,4,1};
    int n = 5;
    int x = 0;
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i] = 0;
    }
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(arr2[j]==1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        arr2[mindx] = 1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}