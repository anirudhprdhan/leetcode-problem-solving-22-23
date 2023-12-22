class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        int col;
        int count_inside=0;
        for (int i=0;i<mat.size();++i)
        {
            count_inside=0;
            for (int j=0;j<mat[i].size();++j)
            {
                if(mat[i][j]==1)
                {
                    count_inside+=1;
                    col=j;
                }
            }
            if(count_inside==1)
            {
                count_inside=0;
                for(int k=0;k<mat.size();++k)
                {
                    if(mat[k][col]==1)
                        count_inside+=1;
                }
            }
            if(count_inside==1)
                count+=1;
        }
        return count;
    }
};