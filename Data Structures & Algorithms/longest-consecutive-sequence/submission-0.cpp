class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(), nums.end());
        int res = 0 ;
        for(int num : nums){
            int streak = 0 , curr = num ;
            if(store.find(curr-1)!=store.end()){
                continue;
            }
            while(store.find(curr)!=store.end()){
                streak++;
                curr++;
            }
            res = max(res,streak);
        }
        return res ;

    }
};
