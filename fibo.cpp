#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    for(int i =0 ; i<n;i++){
        int nextnum = a + b;
        cout <<nextnum<<"   ";
        a = b;
        b = nextnum;
    }
    
    }
