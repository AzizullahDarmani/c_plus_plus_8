// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s ;
//     getline(cin,s); 
//     set<int> text; 
//     for(int i=0; i<s.size(); i++){
//         text.insert(tolower(s[i])); 
//     }
//     cout<< text.size() << endl ; 
//     for(auto it = text.begin(); it != text.end(); it++){
//         cout<< (char)*it << " "; 
//     }
//     return 0; 
    
// }


    ////second method, using unique() fucntion 
#include<bits/stdc++.h>
using namespace std;
// int main() {
//     string s ;
//     getline(cin,s); 
//     sort(s.begin(), s.end());
//     auto last = unique(s.begin(), s.end());
//     s.erase(last, s.end());
//     cout<< s.size() << endl ; 
//     for(auto it = s.begin(); it != s.end(); it++){
//         cout<< *it << " "; 
//     }
//     return 0;
// }




int main(){
    string s; 
    getline(cin,s) ; 

    sort(s.begin(), s.end()) ; 

    auto last = unique(s.begin(), s.end() )  ; 

    s.resize(distance(s.begin(), last)) ; 

    cout<< s.size() << endl ;
    
    for(auto it = s.begin(); it!= last ; it++){
        cout<< *it << " " ; 
    }
    return 0; 
}
