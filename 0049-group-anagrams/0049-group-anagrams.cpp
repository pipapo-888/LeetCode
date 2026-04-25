class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // unorderedmapのkeyにソートしたstring、valueに実際のstringを代入する
    // 同じkeyのものは同じ二次元配列に入れてreturn する

    unordered_map<string, vector<string>> map;
    for (string s: strs)
    {
        string sort_s = s;
        sort(sort_s.begin(), sort_s.end());
        map[sort_s].push_back(s);
    }
    vector<vector<string>> ans;
    for (const auto& p: map)
        ans.push_back(p.second);
    return ans;
    }
};