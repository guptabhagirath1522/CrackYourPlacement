#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int left = 1;
    int right = nums.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        int count = 0;

        for (int num : nums)
        {
            if (num <= mid)
            {
                count++;
            }
        }
        if (count > mid)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "The duplicate number is " << findDuplicate(nums) << endl;
    return 0;
}
