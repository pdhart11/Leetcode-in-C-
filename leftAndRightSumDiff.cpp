class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) 
    {
        int i = 0;
        int leftSum = 0;
        int rightSum = 0;
        int sizeNum = size(nums);
        int absolute = 0;
        vector <int> output = {};
        while (i <= sizeNum-1)
        {
            leftSum = 0;
            rightSum = 0;
            for (int j = 0; j < i; j++)
            {
                leftSum = leftSum + nums[j];
            }
            for (int k = i+1; k < sizeNum; k++)
            {
                rightSum = rightSum + nums[k];
            }
            i++;
            absolute = abs(leftSum - rightSum);
            output.push_back(absolute);
        }
        return output;
    }
};
