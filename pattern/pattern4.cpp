#include <iostream>
using namespace std;
    
int main() {
    int n = 5;

    // *****                  12345          5 -5 =0 +1 =1   5-1+1=5
    // ****                   1234          5-4=1+1=2       
    // ***                    123         5-3=2+1=3
    // **                     12        4 3          n-j+1=i 
    // *                      1          n-i+1
    
    for(int i = 1; i<=n ; i++){
        for(int j =0 ; j<n-i+1 ; j++){
            cout<< " * " ;
        }
        cout<<endl;
    }
    for(int i = 1; i<=n ; i++){
        for(int j =0 ; j<n-i+1 ; j++){
            cout<< j ;
        }
        cout<<endl;
    }
    for(int i = 1; i<=n ; i++){
        for(int j =0 ; j<n-i+1 ; j++){
            cout<< i ;
        }
        cout<<endl;
    }
    

return 0;
}