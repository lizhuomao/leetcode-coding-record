//8ms 10.6MB
//STL hash 实现
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int> :: iterator it = hash.find(target - nums[i]);
            if (it == hash.end())
            {
                hash[nums[i]] = i;
            }
            else
            {
                result.push_back(it -> second);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};