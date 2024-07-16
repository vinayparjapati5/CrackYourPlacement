 int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int cnt = 0;
        int sum = 0;

        unordered_map<int,int>mpp;  // sum,remainder

        mpp[0] = 1;

        for(int i: nums){
            sum+=i;

            int mod = sum%k;
            if(mod<0){
                mod+=k;
            }

            if(mpp.find(mod)!=mpp.end()){
                cnt += mpp[mod];
            }
            mpp[mod]++;
        }
        return cnt;
    }
