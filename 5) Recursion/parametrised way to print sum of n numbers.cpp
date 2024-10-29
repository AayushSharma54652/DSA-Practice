#include<bits/stdc++.h>
using namespace std;
void no(int i,int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    no(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    no(n,0);
}