class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> temp;
        for(int i = 0 ; i<points.size() ; ++i)
            temp.push_back(points[i][0]);
        sort(temp.begin(),temp.end());
        int dist=0;
        int diff;
        for(int i =temp.size()-1;i>0; --i)
        {
            diff= temp[i]-temp[i-1];
            if(dist < diff)
                dist=diff;
        }
        return dist;
    }
};