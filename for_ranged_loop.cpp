#include<iostream>
using namespace std;
int main() {
    int number[5] = {2,3,4,5,6}; 

        ///first method for loop: 
    // for (int i=0; i<5; i++){
    //     cout<< number[i] << " ";  }


        //// second method is called ranged loop
        //// Even it is possible to find out the sum of array using ranged loop

        int sum =0; 
    for (int i : number){
        //// int inside the braces must be the same as the data type of array


        cout << i << " ";  
        sum= sum + i ; 


    }
        cout <<"\n" << sum ;  
    return 0 ; 
}