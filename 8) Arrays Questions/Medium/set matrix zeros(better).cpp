#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
void zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	vector<int>col(m,0);
    vector<int>row(n,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				col [j] = 1;
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || col[j]){
				matrix[i][j] = 0;
			}
		}
	}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
	
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    zeroMatrix(matrix,n,m);
}