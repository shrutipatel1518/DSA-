#include <iostream>
using namespace std;
    
int main() {
    int n=4;
     int arr[n]={1,2,3,4,5} ;
     int temp=arr[1];
     for (int i = 1; i < n; i++)
     {
        arr[i-1]=arr[i];
        
     }
     arr[n]=temp;
     for (int j = 0; j < n ; j++)
     {
        /* code */cout<<arr[j];
     }
     
     
return 0;
}
