int addDigits(int num) {
    int sum=0,rem,i=1;
    while(i!=0)
    {
         while(num!=0)
        {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        }
         if(sum>=0 &&sum<=9)
        {
          break;
        }
        else
        {
            num=sum;
            sum=0;
        }
        i++;
    }
    return sum;
}
