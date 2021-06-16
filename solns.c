/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[],int n)
{
 int i;
 int max;
 int max=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]>max)
   max=arr[i];
 }
 return max
}


int min(int arr[],int n)
{
 int i;
 int min;
 int min=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]<min)
   min=arr[i];
 }
 return min
}


float average(int arr[],int n)
{
 int sum=0;
 int i;
 for(i=0;i<n;i++)
  sum=sum+arr[i];
 return (float)sum/n;
}

int mode(int arr[],int n)
{
 int max;
 max=max(arr,n);
 int temp;
 temp=max+1;
 int i,j;
 int count[temp];
 int counts;
 for(i=0;i<temp;i++)
 {
   counts=0;
   for(j=0;j<n;j++)
     {
       if(arr[j]==i)
       counts++;
     }
   count[i]=count;
 }

 max=max(count,temp);
 for(i=0;i<temp;i++)
  {
    if(count[i]==max)
       break;
  }
 
 return i;
}


int factors(int num,int arr[])
{
 int i=0;
 while(num%2==0)
 {
  arr[i]=2;
  ++i;
  num=num/2;
 }
 int j;
 for(j=3;j<=sqrt(num);j=j+2)
 {
  while(num%j==0)
  {
   arr[i]=j;
   ++i;
   num=num/j;
  } 
 }
 
return i;
}
