#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int maxi = 0;
    int nums[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {

            count++;
            if (count > maxi)
            {
                maxi = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << maxi;
    return 0;
}
