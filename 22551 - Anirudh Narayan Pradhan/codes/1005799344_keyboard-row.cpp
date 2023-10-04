class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> keys={"qwertyuiop","asdfghjkl","zxcvbnm"};
        unordered_map<char,int> rowMap;
        for (int i =0;i<keys.size();i++)
            for(char c : keys[i])
            {
                rowMap[tolower(c)]=i;
                rowMap[toupper(c)]=i;
            }
        vector<string> ans;
        for (string word : words)
        {
            int row=rowMap[word[0]];
            bool flag=true;
            for (char c : word)
            {
                if(rowMap[c]!=row)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(word);
        }
        return ans;
    }
};