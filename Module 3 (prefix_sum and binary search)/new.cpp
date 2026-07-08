#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // 1. Calculate Left Sums safely
    vector<int> leftSum(n, 0);
    for (int i = 1; i < n; i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    // 2. Calculate Right Sums safely
    vector<int> rightSum(n, 0);
    for (int i = n - 2; i >= 0; i--)
    {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }

    // 3. Calculate the absolute difference
    vector<int> answer(n);
    for (int i = 0; i < n; i++)
    {
        answer[i] = abs(leftSum[i] - rightSum[i]);
    }

    for(int i = 0; i < nums.size(); i++)
    {
        cout << rightSum[i]<<" ";
    }
    return 0;
}