#include<bits/stdc++.h>
using namespace std;

int minChar(string str){
        //Write your code here
        //String reverse
        string rev = str;
        reverse(rev.begin(),rev.end());
        int size = str.size();
        str += '$';
        str += rev;
        int n = str.size();
        vector<int>lps(n,0);
        int pre = 0;
        int suf = 1;
        while(suf < n){
            //Matched
            if(str[pre] == str[suf]){
                lps[suf] = pre+1;
                suf++;
                pre++;
            }
            //Not Matched
            else{
                if(pre == 0){
                    suf++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }
        return size - lps[n-1];
    }