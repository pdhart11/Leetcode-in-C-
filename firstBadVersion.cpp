// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int i = n;
        while (i<=n)
        {
            if(isBadVersion(i) == true)
            {
                i = i -1;
            }
            else
            {
                return i + 1;
            }
        }
        return 0;
    }
};
