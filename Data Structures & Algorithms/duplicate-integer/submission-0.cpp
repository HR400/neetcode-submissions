class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int count = 0;
        bool ans = false;
        int n = nums.size() ;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    ans = true;
                    break;
                }

            }
            if(ans == true ) break;
        }
        
        return ans;
    }
};