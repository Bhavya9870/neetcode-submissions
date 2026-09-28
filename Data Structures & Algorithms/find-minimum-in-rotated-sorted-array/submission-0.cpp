class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini = nums[0];
        for(int num:nums){
            mini = min(mini,num);
        }
        return mini;
    }
};
