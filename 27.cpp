#include <iostream>

using std::vector;
using std::cout;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        vector<int>::iterator it_start = nums.begin();
        vector<int>::iterator it_end = nums.end()-1;
        while(it_start < it_end)
        {
            while(it_start <= it_end && *it_start != val)
                ++it_start;
            while(it_start <= it_end && *it_end == val)
                --it_end;
            if(it_start <it_end)
            {
                *it_start = *it_end;
                ++it_start;
            }
        }
        return it_start - nums.begin()-1;
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout << s.removeElement(nums, val);
}
