#include <iostream>
using namespace std;
    
int main() {
    int n =6;
      int arr[]={1,5,9,4,7,3};
      int target = 7;
      for(int i = 0;i< n ; i++){
        if(arr[i]==target){
            cout<<"at index "<<i;
        }
      }
return 0;
}
