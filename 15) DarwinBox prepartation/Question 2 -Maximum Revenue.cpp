#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    int n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0;i < m;i++){
        for (int j=0;j<n;j++){ 
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        int maxi = INT_MIN;
        for(int j=0;j<n;j++){
            maxi = max(maxi,arr[i][j]); 
        }
        cout<<maxi<<" ";
    }
}




// int main2(){
//     int n;
//     int m;

//     cin>>n>>m;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         int maxi = INT_MIN;
//         for(int j=0;j<n;j++){
//             maxi = max(maxi,arr[i][j]);
//         }
//         cout<<maxi<<" ";
//     }
// }