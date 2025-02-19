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

// approach 2

#include<bits/stdc++.h>
using namespace std;

int rev(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){

    int arra[3] = {12,23,34};
    rev(arra, 3);
    for(int i : arra){
        cout<<i<<" ";
    }
}

// i think 2nd approach is the best 