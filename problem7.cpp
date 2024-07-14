#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++; right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return result;
}

// -1 -1 -1 0 0 1 1
int main() {
    vector<int> nums = {-1,0 ,1 ,1 ,-1, -1, 0};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);
   for (auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
