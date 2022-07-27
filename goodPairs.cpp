class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count = 0;
        int length = nums.size();
        for (auto i = 0; i < length - 1; i++)
        {
            for (auto j = i+1; j < length; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
