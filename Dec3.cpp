class Solution {
    private:
    int solve(vector<int>&from,vector<int>&to){
        int x1=from[0],x2=to[0],y1=from[1],y2=to[1];
        return max(abs(x2-x1),abs(y2-y1));
    }
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time=0;
        for(int i=1;i<points.size();i++)time+=solve(points[i-1],points[i]);
        return time;
    }
};