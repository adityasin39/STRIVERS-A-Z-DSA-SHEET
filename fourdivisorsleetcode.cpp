// Approach 1
class Solution {
  
public:
    int sumFourDivisors(vector<int>& nums) {
      // 6X6 type of divisor is not possible for to get to 4 number of divisors as 4 is even
            int sum=0;
       // for any number, 1 and the number itself are always the divisors so we need to check for only one pair of i and n/i
       for(int i=0;i<nums.size();i++)
       {
           int last_div=0; 
           for(int j=2;j*j<=nums[i];j++)
           {
               if(nums[i]%j==0)
               {
                   if(last_div==0) last_div=j;
                   else
                   {
                       last_div=0; // this means that there is one more divisor present and so the total exceeds 4 and thus we break
                       break;
                   }
               }
              
           }
           if(last_div>0 && last_div!=nums[i]/last_div) sum+=1+nums[i]+last_div+ nums[i]/last_div;
           
           
       }
       return sum;
    }
};
// Approach 2
// class Solution {
//     int div(int n)
//     {
//         int sumofdiv=0;
//         int noofdiv=0;
//         int i;
//         for( i=1;i*i<n;i++)
//         {
//             if(n%i==0)
//             { noofdiv+=2; // Because n/i will also be a divisor
//             sumofdiv+=i+n/i;}
//             if(noofdiv>4) return 0; // matlab kuch add nahi karna
//         }
//         if(i*i==n) 
//         {noofdiv++; // 6X6 wale case ke liye
//         sumofdiv+=i;}
//         if(noofdiv==4) return sumofdiv;
//         return 0;

//     }
// public:
//     int sumFourDivisors(vector<int>& nums) {
//      int sum=0;
//      for(int i=0;i<nums.size();i++)
//      {
//          sum+=div(nums[i]);
//      }
//      return sum;
//     }
// };