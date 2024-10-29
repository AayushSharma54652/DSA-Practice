//Dynamic in nature 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    //pair in vector
    vector<pair<int, int>>vec;
    vec.emplace_back(1,2);
    //creating a vector of 5 100 
    vector<int> c(5,100);
    //create an empty vector of 5 values
    vector<int> t1(5);
    //passing a vector to other vector
    vector<int>t2(t1);
    //accessing elements of a vector
    cout<<c[2];
    cout<<endl;
    vector<int>a{10,20,30,40};
    //iterators in a vector
    vector<int>::iterator it=a.begin();
    it ++;
    cout<<*(it)<<" ";
    cout<<endl;
    //printing vectors using iterators
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing or deleting element from a vector
    
    a.erase(a.begin());
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //deleting multiple elements
    //the second address will be of the next element of the 
    //element to be deleted
    a.erase(a.begin()+1 , a.begin()+3);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    // inserting elements in a vector
    //inserting in a begining
    a.insert(a.begin()+1,400);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //inserting multiple elements
    a.insert(a.begin()+1,3,6);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    //copying an entire vector into another vector
    vector<int>copy(2,50);
    a.insert(a.begin()+1,copy.begin(),copy.end());
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //some other vector functions
    //1
    cout<<a.size()<<endl;
    //2
    a.pop_back();
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //3 Swap
    vector<int>s1{30,40};
    vector<int>s2{50,60};
    s1.swap(s2);
    for(auto it:s1){
        cout<<it<<" ";
    }
    cout<<endl;
    //4 clear and empty
    s1.clear();
    cout<<s1.empty();
}