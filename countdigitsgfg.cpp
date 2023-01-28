
 string s=to_string(N);
       int count=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]-'0'==0) continue;
           else if(N % (s[i]-'0')==0) count++;
           
       }
       return count;