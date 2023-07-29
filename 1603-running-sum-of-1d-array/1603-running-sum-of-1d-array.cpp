class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int currsum = 0;
        for (int i=0;i<nums.size();i++){
            currsum = currsum + nums[i];
            result.push_back(currsum);
        }
        return result;
    }
};