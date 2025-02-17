#include<bits/stdc++.h>
using namespace std;

int rev(int arr[]){
    for(int i =0 ; i <1;i++){
        for(int j = 2;j >1; j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
int main(){

    int arra[3] = {12,23,34};
    rev(arra);
    for(int i : arra){
        cout<<i<<" ";
    }
}

// 34 23 12 