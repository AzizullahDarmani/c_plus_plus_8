#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int a; 
//     int sum = 0; 
//     cin>> a; 
//     vector<int> number(a); 
//     for(int i=0 ; i<a ;i++){
//         cin>> number[i]; 
//     }
//     auto new_end = unique(number.begin(), number.end() ) ; 
    
//     for(auto it = number.begin(); it != new_end; ++it){
//         sum += *it ; 
//     }
//     cout<< "the sume of elements: "<< sum ; 
//     return 0; 
// }




int main() {
    int a; 
    cin>> a; 
    vector<int> number(a) ;
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    }
    int sum = 0 ; 
    sort(number.begin(), number.end()) ; 
    auto it = unique(number.begin(), number.end())  ; 
    number.resize(distance(number.begin(), it)); 
    for(int i : number){
        sum+= i ; 
    }
    cout<< "the sum of unique numbers in vector: "<< sum << endl ; 
    return 0; 
}