#include <iostream>
using namespace std;
    
int main() {
    int n =6;
      int num[n]={1,1,2,2,2,3,3};
      int k=1;
      for (int j = 1; j < n; j++)
      {
        if (num[j]!=num[j-1])
        {
            num[k]=num[j];
            k++;
        }
        
    }
    for (int i = 0; i < k; i++)
    {
     /* code */cout<<num[i];
    }
      
return 0;
}