#include<bits/stdc++.h>
using namespace std;

void reval(int arr[], int n){
    for(int i = 0 ; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int pria(int arra[], int n){
    for(int i =0; i < n ; i++){
        cout<<arra[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int even[6] = { 12,23,34,45,56,23};
    int odd[5] = {23,34,45,56,34};

    reval(even, 6);
    reval(odd,5);

    pria(even,6);
    pria(odd,5);
    }

// 23 12 45 34 23 56 
// 34 23 56 45 34 