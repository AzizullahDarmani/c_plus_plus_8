#include<bits/stdc++.h>
using namespace std; 
int main() {
    // int a ;
    // cin>> a; 
    // vector<int> number ; 
    // for(int i=0; i<a; i++){
    //     int x; 
    //     cin>> x; 
    //     number.push_back(x); 
    // }
    // int b; 
    // cin>> b; 
    // sort(number.begin(), number.end()); 
    // for(int i=0; i<b; i++){
    //     cout<< number [i ]<< " "; 
    // }
    // return 0; 







//     int a; 
//     cin>> a; 
//     vector<int> number; 
//     for(int i=0; i<a; i++){
//         int x; 
//         cin>> x; 
//         number.push_back(x); 

//     }
//     int b; 
//     cin>> b;
//     sort(number.begin(), number.end()); 
//     for(int i=0; i<b; i++){
//         cout<< number[i] << " "; 
//     }
//     return 0; 





    int a; 
    cin>> a ;
    vector <int> number(a) ; 
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    }
     
    int b; 
    cin>> b; 
    sort(number.begin(), number.end()) ; 
    for(int i=0; i<b; i++){
        cout<< number[i] << " " ; 
    }
    return 0; 








}