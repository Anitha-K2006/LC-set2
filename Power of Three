bool isPowerOfThree(int n) 
{
    long long int c=n;
     if(n==1)
     {
        return true;
     }
     if (n%3==1)
     {
        return false;
     }
     long long int p=1;
     for(int i=1;i<n;i++)
     {
        p=3*p;
        if(c==p)
        {
            return true;
        }
        if(p>n)
        {
            return false;
            break;
        }
     }
     return 0;
}
