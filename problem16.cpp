#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        int max = 0;
        std::unordered_set<char> uniqueChars;

        for (int left = 0, right = 0; right < s.size(); right++)
        {
            // abcabcbb
            // Check if the character is already in the set
            while (uniqueChars.count(s[right]) > 0)
            {
                cout << left << "__" << right << " " << uniqueChars.count(s[right]);
                // cout <<uniqueChars.<<"->"<<s[left]<<""<<uniqueChars.count(s[right]);
                // If yes, remove the leftmost character from the set and move the left pointer
                uniqueChars.erase(s[left]);
                cout << "count ->"<<s[right]<<;
                left++;
            }
            
            // Add the current character to the set
            uniqueChars.insert(s[right]);

            // Update the maximum length if needed
            max = std::max(max, right - left + 1);
        }

        return max;
    }
};

int main()
{
    Solution solution;
    std::string inputString = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(inputString);
    std::cout << "Length of the longest substring without repeating characters: " << result << std::endl;

    return 0;
}
