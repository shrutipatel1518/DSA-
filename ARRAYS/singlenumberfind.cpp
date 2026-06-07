#include <iostream>
using namespace std;
    
int main() {
    int ans = 0;
    int arr[7] = {1,2,2,3,3,4,1} ;
    for(int i =0 ; i< 7;i++){
        ans = ans^arr[i];
    }
    cout<<ans;
return 0;
}


// #include <iostream>
// using namespace std;
    
// int main() {
//     int count,num;

//       int arr[7] = {1,2,2,3,3,4,1} ;
//       for (int i = 0; i < 7; i++)
//       {
//         num = arr[i];
//         count = 0;
//         for (int j = 0; j < 7; j++)
//         {
//             if (arr[j]==num)
//             {
//                count++;
//             }
            
            
//         }
//         if (count ==1)
//         {
//             cout<<arr[i];
//         }
//       }
      
// return 0;
// }
