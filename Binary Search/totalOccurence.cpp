#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findFirstOccurenece(vector<int> arr, int target)
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
            end = mid - 1;
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

int findlastOccurenece(vector<int> arr, int target)
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
            start = mid + 1;
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

    vector<int> arr{1, 2, 3, 3, 3, 3, 3, 3, 6, 7, 8, 9};
    int target = 3;
    int firstOccurenece = findFirstOccurenece(arr, target);
    int lastOccurenece = findlastOccurenece(arr, target);

    int totalOccurence = (lastOccurenece - firstOccurenece) + 1;
    cout << "TotalOccurence: " << totalOccurence << endl;
    return 0;
}
