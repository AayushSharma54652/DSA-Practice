#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long rev = 0;
    int a = 0;
    if(n<0){
        a = 1;
        n = abs(n);
    }
    while(n > 0){
        int last = n % 10;
        rev = (rev * 10) + last;
        n = n/10;
    }
    if(a==1){
        cout<<"-"<<rev;
    }
    else 
    {
        cout<<rev;
    }
}