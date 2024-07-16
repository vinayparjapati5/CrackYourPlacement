int maxArea(vector<int>& height) {

        int n = height.size();

        int i = 0;
        int j = n-1;

        int curr_area = 0;
        int max_area = 0;

        while(i<j){
            curr_area = (j-i) * min(height[i],height[j]);
            max_area = max(max_area, curr_area);

            if(height[i]<= height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return max_area;
        
    }
