#include<iostream>
using namespace std;
int main()
{
  int n,temp,rem,count=0;
  cin>>n;
  temp=n;

  if(temp%100!=0)
    {
      rem=temp%100;
      count+=temp/100;
      temp=rem;

      if(temp%20!=0)
        {
          rem=temp%20;
          count+=temp/20;
          temp=rem;

          if(temp%10!=0)
            {
              rem=temp%10;
              count+=temp/10;
              temp=rem;

              if(temp%5!=0)
                {
                  rem=temp%5;
                  count+=temp/5;
                  temp=rem;

                  count+=rem;
                }
              else
                {
                  count+=temp/5;
                }
            }
          else
            {
              count+=temp/10;
            }
        }
      else
        {
          count+=temp/20;
        }
    }
  else
    {
      count+=temp/100;
    }
  cout<<count;
  return 0;
}
