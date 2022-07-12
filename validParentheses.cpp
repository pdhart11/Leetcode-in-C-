
class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> parStack;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                parStack.push(s[i]);
            }
            else
            {
                if(parStack.empty() or (parStack.top() == '(' and s[i] != ')') or (parStack.top() == '[' and s[i] != ']') or (parStack.top() == '{' and s[i] != '}'))
                {
                    return false;
                }
                parStack.pop();
            }
        }
        return parStack.empty();
    }
};
