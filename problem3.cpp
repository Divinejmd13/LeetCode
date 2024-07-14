#include <iostream>
#include <vector>
#include <algorithm>

int longestSuccessiveElements(std::vector<int>& a) {
    if (a.empty()) {
        return 0;
    }

    sort(a.begin(), a.end());

    int lse = 1;
    int lon = 1;

    for (int i = 1; i < a.size(); ++i) {
        if (a[i] - a[i - 1] == 1) {
            lse++;
        } else if (a[i] != a[i - 1]) {
            lse = 1;
        }
        
        lon = std::max(lse, lon);
    }

    return lon;
}

int main() {
    std::vector<int> myVector = {15, 6, 2, 1, 16, 4, 2, 29, 9, 12, 8, 5, 14, 21, 8, 12, 17, 16, 6, 26, 3};
    int result = longestSuccessiveElements(myVector);

    std::cout << "Length of the longest consecutive subsequence: " << result << std::endl;

    return 0;
}
