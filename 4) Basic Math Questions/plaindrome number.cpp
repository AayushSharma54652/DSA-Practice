#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long rev = 0;
    int b = n;
    int a = 0;
    if(n<0){
        a=1;
        n=abs(n);
    }
    while(n>0){
        int last = n%10;
        n = n/10;
        rev =(rev*10)+last;
    }
    if(rev == b)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}