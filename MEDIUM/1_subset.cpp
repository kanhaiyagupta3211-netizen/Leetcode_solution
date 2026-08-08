class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        generatesubset(nums,0,current,result);
        return result;
    }
    private:

    void generatesubset(vector<int>& nums,int start,vector<int>& current, vector<vector<int>>& result){
        result.push_back(current);
        for(int i=start;i<nums.size();i++){
            current.push_back(nums[i]);
            generatesubset(nums,i+1,current,result);
            current.pop_back();
        }
    }
};