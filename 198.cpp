//You are a professional robber planning to rob houses along a street. Each house has a certain amount of money
//stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system
//connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
//
//Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of
//money you can rob tonight without alerting the police.
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int odd = 0;
        int even = 0;
        for (unsigned int i =0; i<nums.size(); ++i) {
            if(i%2)
                odd = max(nums[i]+odd, even);
            else
                even = max(nums[i]+even, odd);
        }
        return odd>even?odd:even;
    }
};
