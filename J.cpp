#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int a; 
//     cin>> a; 
//     vector<int> number(a); 
//     for(int i=0; i<a; i++){
//         cin>> number[i]; 
//     }
//     sort(number.begin(), number.end()); 
   
//         cout<<  number[number.size()-1]- number[0];  
         
    
    
//     return 0; 
// }






    //// SECOND METHOD

int main() {
    int a ;
    int max = -1e9 ; 
    int min = 1e9 ; 
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
        if (number[i]<min)
        min = number[i]  ; 
    }
    int difference = max - min ; 
    cout<< "the difference between max and min: "<< difference << endl ; 
}