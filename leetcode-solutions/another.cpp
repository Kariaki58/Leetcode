#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int carry = 1;
        int size = digits.size();
        
        for (int i = size - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            carry = sum / 10;
            digits[i] = sum % 10;
        }
        
        if (carry == 1) {
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};

// Testing the function
int main() {
    Solution solution;
    
    // Test cases
    std::vector<std::vector<int>> testCases = {
        {1, 2, 3},    // 123 + 1 = 124
        {9, 9, 9},    // 999 + 1 = 1000
        {1, 0, 0},    // 100 + 1 = 101
        {0},          // 0 + 1 = 1
        {4, 3, 2, 1}  // 4321 + 1 = 4322
    };

    for (auto& digits : testCases) {
        std::vector<int> result = solution.plusOne(digits);
        std::cout << "Result: ";
        for (int num : result) {
            std::cout << num;
        }
        std::cout << std::endl;
    }

    return 0;
}
