#include <iostream>
using namespace std;
    
int main() {
    int n= 7;
    int arr[]={0,1,2,0,4,0,10}  ;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j];
    }
    
    
return 0;
}