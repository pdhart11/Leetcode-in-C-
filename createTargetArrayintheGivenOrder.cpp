class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> targetArray;
        for (int elementIndex = 0; elementIndex < size(nums); elementIndex++)
        {
            targetArray.insert(targetArray.begin() + index[elementIndex], nums[elementIndex]);
        }
        return targetArray;
    }
};
