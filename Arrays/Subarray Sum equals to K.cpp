int subarraySum(vector<int>&nums, int k){
  int n = nums.size();
  int cnt = 0;
  int sum = 0;
  unordered_map<int,int>preSum; //sum,cnt

  preSum[0] = 1; // 

  for(int i=0; i<n; i++){
    sum +=nums[i];

    int rem = sum-k;

    cnt+=preSum[rem];

    preSum[rem]+=1;
    
  }
  return cnt;
}
