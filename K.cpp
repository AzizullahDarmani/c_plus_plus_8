#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int a ;
//     cin>> a; 
//     vector<int > number(a); 
//     for(int i=0 ;i<a ;i++){
//         cin>> number[i]; 
//     }
//     int m ;
//     cin>> m ; 
//     sort(number.begin(), number.end()); 
//     cout<< number[number.size()-1] + number[number.size() - 2]; 
//     return 0 ; 
// }




int main() {
    int a ;
    int max = -1e9 ; 
    int max_1 = -1e9 ; 
    cin>> a; 
    vector<int> number(a) ; 
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    }
    for(int i=0; i<number.size() ; i++){
        if (number[i]>max)
        max = number[i] ; 
    }
    for(int i=0; i<number.size(); i++){
        if (number[i]>max_1 and number[i]!=max)
        max_1 = number[i]  ; 
    }
    int sum_max_num = max + max_1 ; 
    cout<< "the difference between max and min: "<< sum_max_num << endl ;  
}