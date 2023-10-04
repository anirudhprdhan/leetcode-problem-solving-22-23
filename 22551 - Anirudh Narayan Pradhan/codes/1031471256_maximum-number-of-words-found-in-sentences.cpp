class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        int space=1;
        for(int i=0;i<sentences.size();++i)
        {
            space=1;
            for(int j=0;j<sentences[i].length();++j)
            {
                if(sentences[i][j]==' ')
                {
                    ++space;
                }
                if(space>max)
                {
                    max=space;
                }
            }
        }
        return max;
    }
};