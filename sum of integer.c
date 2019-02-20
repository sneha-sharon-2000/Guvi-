#include<stdio.h>
#include<conio.h>
void main()
{
  int n,k,i;
  cin>>n>>k;
  int a[n],b[k];
for(int i=0; i<k; i++)
 b[i]=0;
 for(int i = 0; i < n; i++)
{
cin >> a[i];
b[a[i]%k]++;
}
int sum=0;
sum+=(b[0]*(b[0]-1))/2;
for(int i=1; i<=k/2 && i!=k-i; i++)
{
sum+=b[i]*b[k-i];
}
if(k%2==0)
sum+=(b[k/2]*(b[k/2]-1))/2;
cout<<sum;
getch();
}
