#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main()
{
   char str[10001];
   int len, i;
   gets(str);
   len = strlen(str);
   for(i=0; i<len; i++)
   {
      if(i==0)
      {
        //  str[i] = str[i];
         if(str[i]>=97 && str[i]<=122)
         {
            // str[i] = str[i]-32;
            // ch_temp = str[i];
            str[i] -=32;
         }
      }
   }
   cout<<str<<endl;
}