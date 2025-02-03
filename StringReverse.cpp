
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    string rev_name;
    cout<<"enter the name\n"; //Sarvadnya
    getline(cin, name);
    int size = name.length();
    for(int i = size; i >= 0; i-- ){
        rev_name[i]=name[size-i];
    }
    cout<<rev_name;
}
