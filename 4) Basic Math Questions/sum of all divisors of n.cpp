#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            if(i%j == 0){
                sum=sum+j;
            }
        }
    }
    cout<<sum;
}

// 2nd approch 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ls;
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=(n);i++){
        for(int j = 1;j<=sqrt(i);j++){
        //for(int j =1;j*j<=i;j++){}
            if(i%j==0){
            ls.push_back(j);
            if((i/j) != j){
                ls.push_back(i/j);
            }
        }
    }
    }
    cout << accumulate(ls.begin(), ls.end(), 0);
    return 0;
}