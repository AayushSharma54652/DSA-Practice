#include<bits/stdc++.h>
using namespace std;
int maximum_subarray_sum(vector<int> &arr,int n){
    int sum = 0;
    int maximum = INT_MIN;
    int start = 0;
    int ansstart = -1;
    int ansend = -1;
    for(int i=0;i<n;i++){
        if(sum == 0) start = i; 
        sum += arr[i];
        if(sum > maximum){
            maximum = sum;
            ansstart = start;
            ansend = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    for (int i = ansstart; i <= ansend; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
    if(maximum < 0){
        return 0;
    }
    return maximum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maximum_subarray_sum(arr,n);
}