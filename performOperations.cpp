class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        auto x = 0;       
        for (auto i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "++X" or operations[i] == "X++")
            {
                x = x + 1;
            }
            else
            {
                x = x - 1;
            }
        }
        return x;
    }
};
