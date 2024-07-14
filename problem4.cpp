#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
int getLongestZeroSumSubarrayLength(std::vector<int> &arr) {
    int longest = 0;
    int sum = 0;

    std::unordered_map<int, int> sumMap;

    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];

        if (sum == 0) {
            longest = i + 1;
        } else {
            if (sumMap.find(sum) != sumMap.end()) {
                longest = std::max(longest, i - sumMap[sum]);
            } else {
                sumMap[sum] = i;
            }
        }
    }

    return longest;
}
