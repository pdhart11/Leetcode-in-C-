class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int count = 0;
        int i = 1;
        int length = nums.size();
        while (i<length)
        {
            if (nums[count] + nums[i] == target)
            {
                return {count,i};
            }
            if (i==length-1)
            {
                count++;
                i = count +1;
            }
            else
            {
                i++;
            }
        }
    return {-1,-1};
    }
};
