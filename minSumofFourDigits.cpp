class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int> myArray;
        while (num != 0)
        {
            myArray.push_back(num%10);
            num = num / 10;
        }
        sort(myArray.begin(), myArray.end());
        return (myArray[0]*10 + myArray[2] + myArray[1]*10 + myArray[3]);
    }
};
