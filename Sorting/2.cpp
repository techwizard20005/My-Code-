#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int x = 12;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j and arr[i]+arr[j]==x){
               return{i+1,j+1};
               flag = true;
                break;
            }

        }
        if(flag==true){
            break;
        }
        
    }
    if(flag == false){
        return{};
    }
}