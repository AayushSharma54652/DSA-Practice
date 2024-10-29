#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] =79;
    cout << arr[3];
    return 0;
}
*/

/* array address can be stored anywhere in memeory but the one 
thing that is clear is that the address of 1st index of array
will be after the zero index of array*/

// 2d Array
// int main(){
//     int arr[2][5];
//     arr[1][4] = 78;
//     cout<<arr[1][3];
//     return 0;
// }


// array with the help of loops and array is always passed by reference


int main(){
    int arr[5];
    int i;
    for( i=0;i<5;i=i+1){
        cin>>arr[i];
    }

    for( i=0;i<5;i=i+1){
        cout<<arr[i]<<" ";
    }
}
