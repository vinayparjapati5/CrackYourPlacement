vector<int> twoSum(vector<int>& nums, int target) {

       unordered_map<int,int>mpp;
        
        for(int i=0; i<nums.size(); i++){

           // int a = nums[i];
            
            int remaining = target - nums[i];

            if(mpp.find(remaining)!=mpp.end()){
               return { mpp[remaining],i};
            }
            mpp[nums[i]] = i;
        }

        return {};

    }
