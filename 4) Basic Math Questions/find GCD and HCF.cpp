#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // 1st brute force method
    int gcd = 1;
    for(int i=1;i<=min(n,m);i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
    }
    cout<<gcd<<endl;

    // 2nd by Euclidean Algorithm
    while(n>0&&m>0){
        if(n>m){
            n = n%m;
        }
        else{
            m = m%n;
        }
    }
    if(n == 0){
        cout << m;
    }
    else{
        cout << n;
    }

}