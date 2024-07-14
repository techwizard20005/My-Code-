#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {4,5,2,3,1};
    int n = v.size();
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){ //-i make code efficient but do not change its time complixiety 
    //         if(v[j]>v[j+1]){
    //             // int temp = v[j];
    //             // v[j] = v[j+1];
    //             // v[j+1] = temp;
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){ //-i make cose efficient but do not change its time complixiety 
            if(v[j]>v[j+1]){
                // int temp = v[j];
                // v[j] = v[j+1];
                // v[j+1] = temp;
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}