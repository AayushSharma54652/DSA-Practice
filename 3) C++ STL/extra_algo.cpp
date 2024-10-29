#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>b{50,20,60,40};
    for(auto it:b){
        cout<<it<<" ";
    }
    cout<<endl;
    //sorting a vector
    sort(b.begin(),b.end());
    for(auto it:b){
        cout<<it<<" "; 
    }
    cout<<endl;
    //sorting a array 
    int arr[5]={1,2,6,3,7};
    int i;
    //sorting in ascending order
    sort(arr,arr+5);
    //sorting in descending order
    sort(arr,arr+5,greater<int>());

    for( i=0;i<5;i=i+1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Custom my way sorting using comp  
    /*bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second>p2.second)return true;
        if(p1.second<p2.second)return false;
        if(p1.first>p2.first)return true;
        return false;
    }
    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort it according to 2nd element 
    //if 2nd element same then sort according to first
    //in ascending order
   
    sort(a,a+5,comp);
    for(auto it:a){
        cout<<it.first<<" "<<it.second<<endl;
    }*/


    //to count the number of 1 to represent a number
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<cnt<<endl;

    // to get the number of permutations of a string
    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // to get max element of an array
    int arr2[5]={1,2,6,3,7};
    int maxi=*max_element(arr2,arr2+5);
    cout<<maxi<<endl;
    for(i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}