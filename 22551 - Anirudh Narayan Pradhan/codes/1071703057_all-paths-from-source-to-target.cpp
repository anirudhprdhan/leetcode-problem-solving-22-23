class Solution {
public:
    void repeat(int i,vector<int> insert,vector<vector<int>> &ans,vector<vector<int>> &graph)
    {
        // cout<<i<<endl<<"idk where i am"<<endl;

        insert.push_back(i);

        if(graph[i].size()==0 || i==graph.size()-1)
        {
            if(i==graph.size()-1)
                ans.push_back(insert);
            return;
        }

        // insert.push_back(i);
        int j=0;
        while(j<graph[i].size())
        {
            repeat(graph[i][j],insert,ans,graph);
            j+=1;

        }  


    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        repeat(0,{},ans,graph);
        return ans;
    }
};