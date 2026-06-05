#include <iostream>
using namespace std;
    
int main() {
      int nums[n]={3,0,1};
      int n = nums.size();
      int totalsum =n*(n+1)/2 ;
      int arrsum = 0;
      for (int i = 0; i < n; i++)
      {
        arrsum = arrsum + nums[i];
      }
      int ans = totalsum-arrsum;
      cout<<ans;
return 0;
}
