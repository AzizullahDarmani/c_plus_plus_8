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
    // int c,d; 
    // cin>> c >> d; 
    // reverse(number.begin()+c, number.begin()+d +1); 

    //     // If you do not include 1 in the expression number.begin()+d+1, then the range of elements to be reversed will not include the digit at index d.
    //     // For example, suppose you have the number "12345" and you want to reverse the digits between indices 1 and 3, which corresponds to the substring "23". If you use the expression number.begin()+1 and number.begin()+3 to specify the range to be reversed, the reverse() function will only reverse the elements "2" and "3", resulting in the number "13245".
    //     // However, if you use the expression number.begin()+1 and number.begin()+4 instead, the reverse() function will reverse all three elements "2", "3", and "4", resulting in the number "14325".
    
    // for(int i=0; i<number.size(); i++){
    //     cout<< number[i] << " "; 
    // }
    // return 0; 
    



    int a; 
    cin>>a ;
    vector<int> number(a) ; 
    for(int i=0; i<a; i++){
        cin>> number[i] ; 
    }
    int b,c; 
    cin>> b >> c; 
    reverse(number.begin()+b, number.begin()+c+1 ) ; 
    for(int i=0; i<number.size(); i++){
        cout<< number[i] << " " ; 
    }
    return 0; 



}