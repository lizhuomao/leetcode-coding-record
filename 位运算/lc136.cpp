//52ms
//69.5MB
//桶排序
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        vector<int> cnt = vector<int>(200005, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            cnt[nums[i] >= 0 ? nums[i] : ((-nums[i]) + 100000)]++;
        }
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i] == 1)
            {
                if (i > 100000) return -(i - 100000);
                else return i;
            }
        }
        return 0;
    }
};

//12ms 16.4MB
//位运算 异或满足交换律和结合律，又因为异或操作相同得零，故有解。
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[0] ^= nums[i];
        }
        return nums[0];
    }
};