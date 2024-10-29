//it is in sorted manner but not unique 
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    for(auto it:ms){
        cout<<it<<" ";
    }
    ms.erase(1);//delete all occurences of 1

    int cnt =ms.count(1);//count the no of 1 occurences
    cout<<cnt<<endl;
    //for deleting single 1
    ms.erase(ms.find(1));
    for(auto it:ms){
        cout<<it<<endl;
    }
}
