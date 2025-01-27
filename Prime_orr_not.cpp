#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag =0;
    int n = 9;
    for(int i = 2; i <n; i++){
        if (n % i == 0){

            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
