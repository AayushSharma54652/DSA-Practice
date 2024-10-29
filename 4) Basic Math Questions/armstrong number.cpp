#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b = n;
    int sum = 0;
    while(n>0){
        int last = n%10;
        n = n/10;
        sum = sum+(last*last*last);
    }
    if(sum == b){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}