class Solution {
public:
    string defangIPaddr(string address) 
    {
        string myString;
        int length = address.length();
        for (auto i = 0; i < length; i++)
        {
            if (address[i] == '.')
            {
                myString.push_back('[');
                myString.push_back('.');
                myString.push_back(']');
            }
            else
            {
                myString.push_back(address[i]);
            }
        }
        return myString;
    }
};
