class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> myArray(nums.size(), 0);
        auto count = 0;
        for (auto i = 0; i < nums.size(); i++)
        {
            count = count + nums[i];
            myArray[i] = count;
        }
        return myArray;
    }
};
