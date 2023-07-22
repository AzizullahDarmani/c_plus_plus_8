#include <bits/stdc++.h>
using namespace std;

    ////note: unique() function, is used for to remove the consecutive duplicates, and it does not remove the 
    // duplicates. 


// int main(){
// int n;
// cin >> n;
// vector<int> v;
// for(int i = 0; i < n; i++){
//     int el;
//     cin >> el;
//     v.push_back(el);
// }
// sort(v.begin(), v.end());
//     //// it counts the number of unique elements 
// // int cnt = unique(v.begin(), v.end()) - v.begin();
// // cout << cnt;


//     auto it = unique(v.begin(), v.end()); 
//     //In this code, auto is a keyword used to automatically deduce the data type of the variable it in the line:
    
//     v.erase(it, v.end()); 
//     for(auto& n : v){
//         cout << n << " "; 
//     }
//     return 0; 

// }



// int main() {
//     int a; 
//     cin>> a; 
//     vector<int> number(a); 
//     for(int i=0; i<a; i++){
//         cin>> number[i]; 
//     }
//     auto new_end = unique(number.begin(), number.end()); 
//         // we use the resize function to find out the size of vectora after the unique() function is applied
        
//     number.resize(distance(number.begin(), new_end)); 

//     for ( auto it = number.begin(); it != new_end; ++it)
//         cout<< *it << " "; 
//     cout<< endl ;
//     cout<< " the size of vector: "<< number.size() << endl ;
//         return 0; 
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
    int size = number.size() ; 
    cout<< "the size of vector with out consecutive duplicates: "<< size<< endl ; 
}