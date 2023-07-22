#include<bits/stdc++.h>
using namespace std; 

    /// first method
// int main() {
//     int a ;
//     cin>> a; 
//     vector<int> number(a); 
//     for(int i=0; i<a; i++){
//         cin>> number[i]; 
//     }
//     int b; 
//     cin>> b; 
//     auto it = find(number.begin(), number.end(), b);
//     if (it != number.end()){
//         cout<< "yes"; 
//     }else {
//         cout<< "no "; 
//     }
//     return 0; 
// } 


    ////second method
// int main(){
// int n;
// cin >> n;
// vector<int> v;
// for(int i = 0; i < n; i++){
//     int el;
//     cin >> el;
//     v.push_back(el);
// }
// int k;
// cin >> k;
// for(int i = 0; i < v.size(); i++){
//     if(v[i] == k){
//         cout << "Yes";
//         return 0;
//     }
// }
// cout << "No";
// return 0; 
// }




int main() {
    int a; 
    cin>> a ;
    vector<int> number(a) ; 
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    }
    int b; 
    cin>> b; 
    for(int i=0; i<number.size(); i++){
        if (number[i]==b){
            cout<< "yes" ; 
            return 0; 
        }
        
    }
    cout<< "no" ; 
    return 0; 
}

