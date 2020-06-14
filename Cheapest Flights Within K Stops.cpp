
class Solution {
public:
      int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {

      int INF = (int)1e8;
    K++;
    vector<int> dp(n, INF);
    dp[src] = 0;
    for (int k = 1; k <= K; k++) {
      vector<int> newWei(n);
      for (int i = 0; i < n; i++) {
        newWei[i] = dp[i];
      }

      for (vector<int>& e : flights) {
        newWei[e[1]] = min(newWei[e[1]], dp[e[0]] + e[2]);     //  dp[v][k] = min(dp[v][k], dp[u][k - 1] + w);
      }
      dp = newWei;
    }
    return dp[dst] == INF ? -1 : dp[dst];  
        
    }
};
