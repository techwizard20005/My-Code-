//Time complexity worst than bubbel sort and cant be optimised
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){
        cout<<ele<<" "; 
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1; 
        //minimum element calculation 
        for(int j=i;j<n-1;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){
        cout<<ele<<" "; 
    }

}