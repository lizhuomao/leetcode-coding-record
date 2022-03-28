//28ms 10MB
//穷举法
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> cnt = vector<int>(nums1.size(), 1);
        for (int i = 0; i < nums2.size(); i++)
        {
            for (int j = 0; j < nums1.size(); j++)
            {
                if (nums1[j] == nums2[i] && cnt[j] == 1)
                {
                    cnt[j]--;
                    break;
                }
                //cout << cnt[j] << " ";
            }
            //cout << endl;
        }
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (cnt[i] == 0)result.push_back(nums1[i]);
        }
        return result;
    }
};
//8ms 10.2MB
//hash map 
//记录第一个数组中各数的出现次数；遍历第二个数组，如果记录过（记录为正）就将其push进结果数组
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        unordered_map<int, int> hash = unordered_map<int, int>();
        for (int i = 0; i < nums1.size(); i++)
        {
            hash[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            unordered_map<int, int> :: iterator it = hash.find(nums2[i]);
            if (it != hash.end() && it -> second > 0)
            {
                it -> second--;
                result.push_back(nums2[i]);
            }
        }
        return result;
    }
};