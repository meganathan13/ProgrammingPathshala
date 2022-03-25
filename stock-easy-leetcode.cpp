class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pmax[n];
        int smax[n];
        if(n==0 || n==1)
            return 0;
        if(n==2){
            int j=prices[1]-prices[0];
            if(j>0)
             return j;
            else
             return 0;
        }
        pmax[0]=prices[0];
        for(int i=1;i<n;i++){
            pmax[i]=min(pmax[i-1],prices[i]);
        }
        smax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            smax[i]=max(smax[i+1],prices[i]);
        }
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            int k=smax[i]-pmax[i-1];
            ans=max(ans,k);
            
        }
        if(ans >0 )
          return ans;
        else
            return 0;
    }
};