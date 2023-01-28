// this code is for k digit number
//Approach 1
int digitcount(int n)
    {
        int count=0;
        while(n)
        {
            
        
        count++;
        n=n/10;
        }
        return count;
    }
    int sum=0;
        int num=n;
        int cnt=digitcount(n);
        while(n)
        {
            int digit=n%10;
            sum+=pow(digit,cnt);
            n=n/10;
            
        }
        if(sum==num) return "Yes";
        else return "No";
        // Approach 2
        vector<int> digits;
       int sum=0;
       int num=n;
       while(n)
       {
           digits.push_back(n%10);
           n=n/10;
       }
       for(int i=0;i<digits.size();i++) sum++pow(digits[i],digits.size());
       if(sum==num) return "Yes";
       else return "No";