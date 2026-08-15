class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        sort(nums.begin(),nums.end());
        for(auto& ele:nums){
            dict[ele]++;
        }
        vector<pair<int,int>> arr(dict.begin(), dict.end());
        sort(arr.begin(),arr.end(),[](auto &a, auto &b)
        {
         return a.second > b.second;
        });
        vector <int> res;
        for(int i = 0 ; i<k;i++){
            res.push_back(arr[i].first);
        }
        return res;
    }
};
