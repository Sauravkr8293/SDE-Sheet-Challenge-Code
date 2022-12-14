class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxsum=INT_MIN;
        int currsum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            currsum=currsum+arr[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
    }
};
