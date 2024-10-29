#include<bits/stdc++.h>
using namespace std;
double median(vector<int> &arr,vector<int> &arr2,int n,int m){
    int n1 = n+m;
    int ind2 = n1/2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ind1el = -1;
    int ind2el = -1;
    int i = 0;
    int j = 0;
    while(i <n && j<m){
        if(arr[i] < arr2[j]){
            if(cnt == ind1)ind1el = arr[i];
            if(cnt == ind2)ind2el = arr[i];
            cnt++;
            i++;
        }
        else{
            if(cnt == ind1)ind1el = arr2[j];
            if(cnt == ind2)ind2el = arr2[j];
            cnt++;
            j++;
        }
    }
    while (i < n) {
        if (cnt == ind1) ind1el = arr[i];
        if (cnt == ind2) ind2el = arr[i];
        cnt++;
        i++;
    }
    while (j < m) {
        if (cnt == ind1) ind1el = arr2[j];
        if (cnt == ind2) ind2el = arr2[j];
        cnt++;
        j++;
    }
    if(n1 % 2 == 1)return (double)ind2el;
    return (double)(((double)ind1el + ind2el))/2.0;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<median(arr,arr2,n,m);
}