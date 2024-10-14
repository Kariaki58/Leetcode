#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class solution {
    public:
        int signleNumber(vector<int>& nums) {
            unordered_map<int,int> numMap;
            if (nums.size() == 1) {
                return nums[0];
            }
            for (int i = 0; i < nums.size(); i++) {
                numMap[nums[i]] = nums[i];
            }
            return 2;
        }
}