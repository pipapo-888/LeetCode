class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (auto &n : nums)
            mp[n]++;
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {return a.second > b.second;});

        vector<int> ans(k);
        for (int i = 0; i < k; i++)
            ans[i] = vec[i].first;
        return ans;
    }

};