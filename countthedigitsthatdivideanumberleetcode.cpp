// to count digits of a number n,
// include <bits/stdc++.h> and then int cnt= int (log10(n)+1)
// whenever a loop has divisions like n/10 then the TC becomes log10(n) and if n/5 then log5(n)
class Solution {
public:
    int countDigits(long long num) {
        string s=to_string(num);
       int count=0;
       for(int i=0;i<s.size();i++)
       {
           if(num % (s[i]-'0')==0) count++;
       }
       return count;
    }
};
// class Solution {
// public:
//     int countDigits(long long num) {
//         long long originalnum=num;
//         int count=0;
//         while(num)
//         {
//             int n=num%10;
//              if(originalnum % n==0) count++;
//             num=num/10;
//         }
//         return count;
//     }
// };