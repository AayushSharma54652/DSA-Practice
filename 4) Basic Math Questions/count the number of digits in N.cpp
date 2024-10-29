#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n>0){
        int last = n%10;
        cnt= cnt+1;
        n=n/10;
        cout<<last<<" ";
    }
    cout<<endl;
    cout<<"total number of digits are " <<cnt;
}