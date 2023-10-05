#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> arr{1, 2, 3, 6, 7, 8, 9};
    int target = 8;
    int ans = binarySearch(arr, target);
    cout << "Ans: " << ans << endl;
    return 0;
}
