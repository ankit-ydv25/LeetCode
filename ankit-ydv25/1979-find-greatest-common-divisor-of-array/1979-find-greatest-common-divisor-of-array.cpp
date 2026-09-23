class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int low = nums[0];
        int high = nums[n-1];
        int maxdivi = 1;
        for(int i=1; i<=low; i++){
            int divi = 1;
            if(high % i == 0 && low % i == 0){
                divi = i;
            }
            if(divi > maxdivi){
                maxdivi = divi;
            }
        }
        return maxdivi;
    }
};