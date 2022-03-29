//16ms 18.9MB
//将i位置的元素前移i位置前面零个数的位置
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) cnt ++;
            else
            {
                nums[i - cnt] = nums[i];
            }
        }
        for (int i = 0; i < cnt; i++)
        {
            nums[nums.size() - i - 1] = 0;
        }
    }
};