class Solution {
public:
    string interpret(string command) {
        string ans="";
        int length = command.size();
        for(int i=0;i<length;i++)
        {
            if(command[i]==')' && command[i-1]=='(')
            {
                ans.pop_back();
                ans += 'o';
            }
            else if (command[i]=='a' && command[i-1]=='(')
            {
                ans.pop_back();
                ans+=command[i];
            }
            else if (command[i]==')' && command[i-1]=='l')
            {
                continue;
            }
            else{
                ans += command[i];
            }
        }
        return ans;
    }
};