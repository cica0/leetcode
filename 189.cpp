class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k <= 0 )
            return; 
        if (k > nums.size())
            k=k%nums.size(); 
        vector<int> temp = nums;
        int i = 0;
        for (int j=k; j<nums.size(); ++j) {
            nums[j] = temp[i++];
        }
        for (int j=0; j<k; ++j) {
            nums[j] = temp[i++];
        }
        return;
        
    }
};
