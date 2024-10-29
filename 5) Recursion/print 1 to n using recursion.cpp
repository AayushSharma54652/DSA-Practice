#include<bits/stdc++.h>
using namespace std;
void no(int n)
{
    if(n<1) return;
    cout<<n<<" ";
    no(n-1);
}
int main(){
    int n;
    cin>>n;
    no(n);
}

//2nd method
void no(int i,int n){
    if(i<1) return;
    cout<<i<<" ";
    no(i-1,n);
}
int main(){
    int n;
    cin>>n;
    no(n,n);
}