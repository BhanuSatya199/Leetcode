int isPalindrome(int x) {
    if(x<0)
    {
        return 0;
    }
   long int rem,rev=0,temp;
    temp=x;
    while(x>0)
    {
       rem=x%10;
       rev=rev*10+rem;
       x/=10;
    }
    if(temp==rev)
    {
        return true ;
    }
    else
    {
        return false;
    }
}