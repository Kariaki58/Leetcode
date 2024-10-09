class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int validate = target - nums[i];
            if (numMap.find(validate) != numMap.end()) {
                return { numMap[validate], i };
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};