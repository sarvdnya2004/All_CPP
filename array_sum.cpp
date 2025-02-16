#include<bits/stdc++.h>
using namespace std;

int arrsum(int array[]){

    int sum = 0;
    for(int i = 0; i< 3; i++){
        sum += array[i] ;
    }
    cout<<sum;
}
int main(){

    int arra[3] = {12,23,34};
    arrsum(arra);
}