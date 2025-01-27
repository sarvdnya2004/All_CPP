#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no to check it is perfect or not";
    cin >>n;
    int sum = 0;
    for(int i=1; i <n; i ++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        cout<<"it is a perfect no";
    }
    else{
        cout<<"not a perfect no";
    }
    return 0;
}