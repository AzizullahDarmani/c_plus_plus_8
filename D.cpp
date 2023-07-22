#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
    // int n; 
    // cin>> n; 
    // vector<int> number; 
    // for(int i=0; i<n ;i++){
    //     int x; 
    //     cin>> x; 
    //     number.push_back(x); 
    // }
    // int m; 
    // cin>> m ;
    // number.erase(number.begin() + m); 
    // for(auto i : number){   
    //     cout<< i << " "; 
    // }
    // return 0; 




    int a ;
    cin>> a; 
    vector<int> number(a) ; 
    for(int i=0; i<a; i++){
        cin>> number[i]  ; 
    }
    int b; 
    cin>> b; 
    number.erase(number.begin()+b) ; 
    for(int i:number){
        cout<< i << " " ; 
    }

    return 0; 





}