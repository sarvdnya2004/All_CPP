#include<bits/stdc++.h>
using namespace std;

int main(){

    int arra[3] = {12,23,34};
    // priarr(arra,5);
    int maxi = arra[0];
    int mini = arra[0];
    for (int i =0; i < 3; i++){
        maxi = max(maxi , arra[i]);
        mini = min(mini , arra[i]);
    }
    cout<<maxi<<endl;
    cout<<mini;
}