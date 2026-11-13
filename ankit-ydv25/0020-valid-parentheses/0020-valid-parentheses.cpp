class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                arr.push_back(s[i]);
            }
            else {
                if(arr.empty()) return false;

                if(s[i] == ')' && arr.back() == '(' ||
                   s[i] == ']' && arr.back() == '[' ||
                   s[i] == '}' && arr.back() == '{') {

                    arr.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        return arr.empty();
    }
};