// we can't use f(i-1,n)
#include<bits/stdc++.h>
using namespace std;
void no(int i,int n){
    if(i>n) return;
    no(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    no(1,n);
}