class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int start=arr[0];
        int profit=0;
        for(int i=1;i<arr.size();i++)
        {
            start=min(start,arr[i]);
            profit=max(profit,(arr[i]-start));
        }
        return profit;
        
    }
};
