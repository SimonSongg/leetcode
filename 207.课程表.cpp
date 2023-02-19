/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

// @lc code=start
class Solution {
    unordered_map<int,vector<int>> graph;
    unordered_set<int> visited;
    unordered_set<int> checked;
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        buildGraph(numCourses,prerequisites);

        for (auto iter = graph.begin(); iter!=graph.end(); ++iter)
        {
            
            //cout<<"iter first"<<iter->first<<endl;
            if (visited.find(iter->first) == visited.end())
            {
                if (!traverse(iter->first)) return false;
            }
            
        }

        return true;
    }

    bool traverse (int start)
    {
        if (checked.find(start) != checked.end()) return true;
        if (visited.find(start) != visited.end()) return false;
        
        bool res = true;
        visited.insert(start);
        for (size_t i = 0; i < graph[start].size(); i++)
        {
            //cout<<"start"<<graph[start][i]<<endl;
            res = traverse( graph[start][i]);
            //cout<<"res"<<res<<endl;
            
            if (res == false) return false;
            //visited.insert(graph[start][i]);
            visited.erase(graph[start][i]);
        }
        visited.erase(start);
        checked.insert(start);
        //cout<<"res output"<<res<<endl;
        return true;
    }
    void buildGraph (int numCourses, vector<vector<int>>& prerequisite)
    {
        for (auto pre : prerequisite)
        {
            graph[pre[0]].push_back(pre[1]);
            //cout<<pre[0]<<endl;
            //cout<<pre[1]<<endl;
        }
    }
};
// @lc code=end

