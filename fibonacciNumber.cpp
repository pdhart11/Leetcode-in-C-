class Solution {
public:
    int fib(int n) 
    {
        int fib = 0;
        vector<int> seq;
        for(int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                fib = 0;
                seq.push_back(fib);
            }
            else if (i == 1)
            {
                fib = 1;
                seq.push_back(fib);
            }
            else
            {
                fib = seq[i-1] + seq[i-2];
                seq.push_back(fib);
            }            
        } 
        return seq[n];
    }
};
