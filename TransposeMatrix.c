#include<stdio.h>
int main()
{
  int n,i,j,temp;
printf("Enter n for A[n][n] matrix ");
scanf("%d",&n);
int A[n][n],v[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
v[i][j]=0;
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("Enter A[%d][%d] element in matrix ",i,j);
scanf("%d",&A[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(v[i][j]==0)
{
temp=A[i][j];
A[i][j]=A[j][i];
A[j][i]=temp;
  v[i][j]=1;
  v[j][i]=1;
}
}
}

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d ",A[i][j]);
        }
      printf("\n");
    }
return 0;
}
