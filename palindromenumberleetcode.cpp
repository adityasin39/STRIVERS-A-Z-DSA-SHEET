// reverse approach
// Approach 1
class Solution {
  
    public:
    bool isPalindrome(int x)
    {
        int originalx=x;
        if(x<0) return false;
        long long reversed=0;
        while(x)
        {
         int num=x%10;
         reversed=reversed*10 + num;
         x=x/10;

            
        }
        if(reversed==originalx) return true;
        else return false;

    }
};
// Approach 2 but incomplete as for 100021 it gives wrong answer and if you dont understand then refer to https://www.youtube.com/watch?v=yubRKwixN-U
// class Solution {
//     int digitcount(int n)
//     {
//        int count=0;
//        while(n)
//        {
//            count++;
//            n=n/10;
//        }
//        return count;
//     }
// public:
//     bool isPalindrome(int x) {
//        if(x<0) return false;
//       while(x)
//       {
//           int a=x%10;
//           int count=digitcount(x);
//           int b=x/pow(10,count -1);
//           if(a!=b) return false;
//           int n=pow(10,count-1);
//           x=x%n;
//           if( (x/10)%10!=0 && count-digitcount(x)>2) return false;
//           x=x/10;

//       }
//       return true;
//     }
// };
// Approach 3
// class Solution {
// public:
//     bool isPalindrome(int x) {
//        if(x<0) return false;
//        string s="";
//        while(x)
//        {
//            s.push_back((x%10)+'0');
//            x/=10;
//        }
//         int i=0;
//       int j=s.size()-1;
//         while(i<j)
//         {
//         if(s[i++]!=s[j--]) return false;
//        }   
//             return true;

//     }
// };
// Approach 4
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0) return false;
//         string s=to_string(x);
//         int i=0;
//         int j=s.size()-1;
//         while(i<j)
//         {
//          if(s[i++]!=s[j--]) return false;
//         }
//         return true;

//     }
// };