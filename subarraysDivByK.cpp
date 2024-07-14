class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k, 0);
        count[0] = 1;
        int prefix = 0, res = 0;
        for (const int& num : nums) {
            prefix = (prefix + num % k + k) % k;
            res += count[prefix]++;
        }
        return res;
    }
};
