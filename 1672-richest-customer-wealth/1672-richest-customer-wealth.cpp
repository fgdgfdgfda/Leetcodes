class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int curr, max =0;
        for(vector<int> cur: accounts) {
            curr =0;
            for(int money: cur) curr += money;
            if (curr > max) max = curr;
        }
        return max;
    }
};