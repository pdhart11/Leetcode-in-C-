class Solution {
public:
    int countAsterisks(string s) 
    {
        int barCount = 0;
        int asterisks = 0;
        int sizeOfS = size(s);
        for (int index = 0; index <= sizeOfS; index++)
        {
            if (s[index] == '|')
            {
                barCount++;
            }
            if (barCount % 2 == 0)
            {
                if (s[index] == '*')
                {
                    asterisks++;
                }
            }
        }
        return asterisks;
    }
};
