class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int count = 0;
        int jewels_length = jewels.length();
        int stone_length = stones.length();
        for (auto i = 0; i < jewels_length; i++)
        {
            for (auto j = 0; j < stone_length; j++)
            {
                if (jewels[i] == stones[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
