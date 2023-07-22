#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
// bool is_prime(int a){
//     if (a<=1){
//         return false ; 
//     }

//     //Furthermore, checking only up to a/2 is more efficient than checking up to a, 
//     //since any factor of a that is greater than a/2 would have a corresponding factor 
//     //less than a/2. By checking only up to a/2, we can reduce the number of iterations and improve the performance of the algorithm.

//     for(int i=2; i<=a/2; i++){
//         if (a%i ==0){
//             return false ; 
//         }
//     }
//     return true; 
    
// }
// int main() {
//     int n; 
//     cin>> n; 
//     vector<int> number; 
//     for(int i=0; i<n ;i++){
//         int x; 
//         cin>> x; 
//         number.push_back(x); 
//     }
//     int m;
//     cin>> m;
//     int cnt = 0; 
//     for(auto i : number){   
//         if (is_prime(i) and i>m)
//             cnt ++; 
        
        
      
//     }
//     cout<< cnt ; 
//     return 0; 
// }



#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int a) {
    for(int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int sum = 0;
    int a;
    cin >> a;
    vector<int> number(a);

    for(int i = 0; i < a; i++) {
        cin >> number[i];
    }

    int b;
    cin >> b;

    for(auto i : number) {
        if (is_prime(i) && i > b) {
            sum++;
        }
    }

    cout << "The count of prime numbers greater than " << b << " in the vector is: " << sum << endl;

    return 0;
}










    //// THE COUNT OF ODD NUMBERS  

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int cnt = 0;
//     int a;
//     cin >> a;
//     vector<int> number(a);
    
//     for(int i = 0; i < a; i++) {
//         cin >> number[i];
//     }
    
//     int b;
//     cin >> b;

//     for(int i = 0; i < a / 2; i++) {
//         if(number[i] % 2 != 0 && number[i] > b) {
//             cnt++;
//         }
//     }

//     cout << "The number of odd numbers greater than " << b << " in the vector is: " << cnt << endl;
//     return 0;
// }
