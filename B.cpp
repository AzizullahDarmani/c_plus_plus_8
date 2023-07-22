#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    // int a; 
    // cin>> a; 
    // vector<int> number; 
    // for(int i=0; i<a; i++){
    //     int x; 
    //     cin>> x; 
    //     number.push_back(x); 

    // }
    // reverse(number.begin(), number.end() ) ; 
    // for(int i=0; i<number.size(); i++){
    //     cout<< number[i] << " "; 
    // }
    // return 0; 
    




    int a; 
    cin>> a; 
    vector<int> numbers ; 
    for(int i=0; i<a; i++){
        int b; 
         cin>> b; 
         numbers.push_back(b) ; 
         }
    reverse(numbers.begin(), numbers.end() ) ; 
    for(int i:numbers){
        cout<< i << " " ; 
    }
    return 0; 
}
