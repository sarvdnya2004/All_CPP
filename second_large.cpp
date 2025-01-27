#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,23,34,45,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    int large = arr[0]; 
    for(int i = 1; i<=size; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    int sec_large = arr[0];
    for(int i = 1; i <= size; i++){
        if(arr[i] > sec_large && arr[i] < large){
            sec_large = arr[i];
        }
    }
    cout<<"the second large no is "<<sec_large;
}