//100ms 22.9MB
//双指针
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        if (nums.size() < 3) return result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0) return result;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums.size() - i < 3) return result;
            int L = i + 1;
            int R = nums.size() - 1;
            while (L < R)
            {
                //cout << L << " " << R << endl;
                if (nums[i] + nums[L] + nums[R] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[L]);
                    temp.push_back(nums[R]);
                    result.push_back(temp);
                    while (L < R && nums[L] == nums[L + 1]) L++;
                    while (L < R && nums[R] == nums[R - 1]) R--;
                    L++;
                    R--;
                }
                else if (nums[i] + nums[L] + nums[R] > 0) R--;
                else L++;
            }
        }
        return result;
    }
};