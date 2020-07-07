class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int counter = 0;
        
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == '(') {
                if (counter != 0) {
                    res += S[i];
                }
                counter++;
            }
            else if (S[i] == ')') {
                counter--;
                if (counter != 0) {
                    res += S[i];
                }
            }            
        }
        return res;
    }
};
