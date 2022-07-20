class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int i = 0;
        int length = nums.size();
        
        for (int i = 0; i < length; i ++)
        {
            nums.push_back(nums[i]);
        }
        return nums;    
    }
};
