//12ms 17.5MB
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int num = (1 + nums.size()) * nums.size() / 2;
        for (int i = 0; i < nums.size(); i++) num -= nums[i];
        return num;
    }
};