class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int t = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                t++;
            }
            else
            {
                nums[i - t] = nums[i];
            }
        }
        return nums.size() - t;
    }
};