//额外数组 28ms 25MB 
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k = k % nums.size();
        vector<int> temp(nums.size());
        for (int i = 0; i < k; i++)
        {
            temp[i] = nums[nums.size() - k + i];
        }
        for (int i = k; i < nums.size(); i++)
        {
            temp[i] = nums[i - k];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = temp[i];
        }
    }
};
//旋转数组法 32ms 24.4MB 
//结果的前k个元素是原数组的后k个元素，所以将整个数组旋转，后k个元素移动到前k个位置，在将其旋转得到最后前k个元素的结果；再将后n - k个元素旋转，得到最终结果。
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};