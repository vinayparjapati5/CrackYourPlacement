 vector<int> findDuplicates(vector<int>& nums) {
   
   int n = nums.size();

   vector<int>ans;

   for(int i=0; i<n; i++){

     int num = abs(nums[i]);
     int index = num-1;

     if(num[index]<0){
       ans.push_back(num);
     }

     nums[index]*=-1;
   }

   return ans;
     
   
 }
