class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {

        sort(items.begin(), items.end());

        int n = items.size();
        vector<int> prefixMax(n);
        prefixMax[0] = items[0][1];

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], items[i][1]);
        }

        vector<int> ans;

        for (int q : queries) {
            int l = 0, r = n - 1;
            int best = 0;

            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (items[mid][0] <= q) {
                    best = prefixMax[mid];
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            ans.push_back(best);
        }

        return ans;
    }
};
