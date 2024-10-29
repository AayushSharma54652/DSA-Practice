#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int largest = arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] != largest && arr[i] > slargest){
            slargest = arr[i];
        }   
    }

    cout<<"Second Lagest Element is "<<slargest;
}