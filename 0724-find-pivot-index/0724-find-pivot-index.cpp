class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total =0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
        }
        int cursum = 0;
        for(int i=0;i<nums.size();i++){
            if(cursum == total- cursum - nums[i])
                return i;
            cursum += nums[i];
        }
        return -1;
    }
};