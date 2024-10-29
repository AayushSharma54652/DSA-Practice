#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Aayush";
    int start = 0;
    int end = s.size()-1;
    while(start < end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s<<endl;
}