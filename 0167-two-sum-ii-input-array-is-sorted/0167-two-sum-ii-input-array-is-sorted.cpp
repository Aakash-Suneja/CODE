#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int current_sum = numbers[left] + numbers[right];
            
            if (current_sum == target) {
                // Return 1-indexed positions
                return {left + 1, right + 1};
            } else if (current_sum < target) {
                // Sum is too small, move the left pointer up to increase it
                left++;
            } else {
                // Sum is too large, move the right pointer down to decrease it
                right--;
            }
        }
        
        return {}; // Fallback, though the problem guarantees exactly one solution
    }
};
