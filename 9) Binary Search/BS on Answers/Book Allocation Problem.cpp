#include<bits/stdc++.h>
using namespace std;
int countStudents(vector<int> &arr,int n,int pages){
    int student = 1;
    long long pagesStudent = 0;
    for(int i=0;i<n;i++){
        if(arr[i]+pagesStudent <=pages){
            pagesStudent += arr[i];
        }
        else{
            student++;
            pagesStudent = arr[i];
        }
    }
    return student;
}
int findPages(vector<int> &arr,int n,int m){
    if(m>n)return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<= high){
        int mid = (low+high)/2;
        if(countStudents(arr,n,mid) > m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
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
    cout<<findPages(arr,n,m);
}