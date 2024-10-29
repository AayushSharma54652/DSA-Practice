#include<bits/stdc++.h>
using namespace std;
void no(int i,int fact){
    if(i<1){
        cout<<fact;
        return;
    }
    no(i-1,fact*i);
}
int main(){
    int n;
    cin>>n;
    no(n,1);
}