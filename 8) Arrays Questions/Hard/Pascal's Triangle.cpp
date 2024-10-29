#include<bits/stdc++.h>
using namespace std;
vector<int>generate_row(int row){
    long long ans = 1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col = 1;col<row;col++){
        ans = ans*(row-col);
        ans = ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}
vector<vector<int>>pascal_triangle(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generate_row(i));
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>result = pascal_triangle(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

