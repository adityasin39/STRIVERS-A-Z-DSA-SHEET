class Solution {
    int findgcd(int a, int b)
    {
        if(a==0) return b;
        return findgcd(b%a,a);
        
    }
public:
    int findGCD(vector<int>& nums) {
     int maxi=INT_MIN;
     int mini=INT_MAX;
     for(int i=0;i<nums.size();i++)
     {
         if(maxi<nums[i]) maxi=nums[i];
         if(mini>nums[i]) mini=nums[i];
     }   
     cout<<maxi<<" "<<mini<<endl;

         int ans=findgcd(maxi,mini);
         return ans;

    }
};