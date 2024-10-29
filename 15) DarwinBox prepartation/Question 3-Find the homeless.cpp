#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int houses[n];
    int people[n];
    for(int i=0;i<n;i++)cin>>people[i];
    for(int i=0;i<n;i++)cin>>houses[i];
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(people[i] < houses[j]){
                count += 1;
                houses[j] = -1;
                break;
            }
        }
    }
    cout<<n-count;
}

int main2(){
    int n;
    cin>>n;
    int house[n];
    int people[n];
    for(int i=0;i<n;i++)cin>>house[i];
    for(int i=0;i<n;i++)cin>>people[i];

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(people[i] < house[j]){
                count += 1;
                house[j] = -1;
                break;
            }
        }
    }
    return n-count;

}