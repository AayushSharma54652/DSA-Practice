#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    string password;
    
    // Get the minimum length to handle both strings
    int minLength = min(str1.size(), str2.size());
    int i;
    
    // Combine the strings up to the minimum length
    for (i = 0; i < minLength; i++) {
        password += str1[i];
        password += str2[i];
    }
    
    // Append the remaining characters of the longer string
    if (i < str1.size()) {
        password += str1.substr(i);
    }
    if (i < str2.size()) {
        password += str2.substr(i);
    }
    
    cout << password << endl;
    return 0;
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    string password;
    int minlength = min(s1.size(),s2.size());
    for(int i=0;i<minlength;i++){
        password += s1[i];
        password += s2[i];
    }
    int i;
    if(i<s1.size()){
        password += s1.substr(i);
    }
    if(i<s2.size()){
        password += s2.substr(i);
    }
    cout<<password;

}