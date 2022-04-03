//0ms 5.8MB 
//二分查找
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        long long l = 1;
        long long r = n;
        while (l < r)
        {
            long long mid = (l + r) / 2;
            if (isBadVersion(mid))
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return int(l);
    }
};