#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
    // int a; 
    // cin>> a ; 
    // vector<int> numbers; 
    // for(int i=0; i<a; i++){
    //     int x; 
    //     cin>> x;
    //     numbers.push_back(x); 
         
         
    // }
    // sort(numbers.begin(), numbers.end() ); 
    // for(int i=0; i<numbers.size(); i++){
    //     cout<< numbers[i] << " "; 
        
    // }
    
    // return 0; 





    int a;
    cin>> a; 
    vector<int> numbers ;
     for(int i=0; i<a; i++){
        int b; 
        cin>> b; 
        numbers.push_back(b)  ; 

     }
     sort(numbers.begin(), numbers.end() ); 
     for(int i=0; i<numbers.size(); i++){
        cout<< numbers[i] << " " ; 
     }





    // int a; 
    // cin>> a; 
    // vector<int> numbers(a) ; 
    // for(int i=0; i<a; i++){
    //     cin>> numbers[i] ; 
    // }
    // sort(numbers.begin(), numbers.end()) ;
    // for(const int& i:numbers){
    //     cout<< i<< " " ; 
    // }



}