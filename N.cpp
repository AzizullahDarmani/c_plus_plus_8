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
    
//     for(auto it = number.begin(); it != new_end; ++it)
//         if (*it % 2!=0){
//             cout<< *it << " ";      
//                }
//                return 0 ;
// }





int main() {
    int a; 
    cin>> a; 
    vector<int> number(a) ;
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    } 
    sort(number.begin(), number.end()) ; 
    auto it = unique(number.begin(), number.end())  ; 
    number.resize(distance(number.begin(), it)); 
    
    for(int i=0; i<number.size(); i++){
        if (number[i]%2!=0){
            cout<< number[i] << " "; 
        }
    }
    return 0; 
}