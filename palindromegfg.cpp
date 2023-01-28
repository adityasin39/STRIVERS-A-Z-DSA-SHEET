		     int originalx=n;
        if(n<0) return false;
        long long reversed=0;
        while(n)
        {
         int num=n%10;
         reversed=reversed*10 + num;
         n=n/10;

            
        }
        if(reversed==originalx) return "Yes";
        else return "No";