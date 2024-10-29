#include<bits/stdc++.h>
using namespace std;

int countEmployees(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = arr[i];
    }
    sort(arr,arr+n);
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != temp[i])count++;
    }
    return count;
}