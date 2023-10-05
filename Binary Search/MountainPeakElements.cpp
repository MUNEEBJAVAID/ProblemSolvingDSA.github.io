#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
         // left side
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
         // right side or may b peak element
            end = mid;
        }
    }
    return arr[start];
}
int main()
{

    vector<int> arr{ 0 , 1 , 10 , 5 , 2};
    int PeakElement = findPeakElement(arr);
    cout << "PeakElement: " << PeakElement << endl;
    return 0;

}
