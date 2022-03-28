//88ms 167.1MB
//hash
//数组排序方法过于简单不在这里实现
class Solution {
public:
    vector<int> ct = vector<int>(200000);
    vector<int> flag = vector<int>(200000, 0);
    int hash(int key) 
    { 
        if (key >= 0) return key % 99973;
        else return (-key) % 99973 + 100000;
    }
    bool insert(int key, vector<int>& nums)
    {
        int h = hash(nums[key]);
        //cout << nums[key] << " " << h << endl;
        if(flag[h] == 0)
        {
            flag[h]++;
            ct[h] = nums[key];
        }
        else
        {
            if (ct[h] == nums[key]) return true;
        }
        return false;
    }
    bool containsDuplicate(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (insert(i, nums)) return true;
        }
        return false;
    }
};
//80ms 50.3MB
//STL实现
bool containsDuplicate(vector<int>& nums)
    {
        unordered_set<int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash.find(nums[i]) != hash.end())
            {
                return true;
            }
            hash.insert(nums[i]);
        }
        return false;
    }