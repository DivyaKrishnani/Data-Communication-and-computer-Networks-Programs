#include<stdio.h>

void main()
{
    int w[10][10];
    int i,j,k,n,y=1;

    printf("Enter no. of routers:");
    scanf("%d",&n);

    printf("Enter adjacency matrix for router:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
            scanf("%d",&w[i][j]);
            if(w[i][j]==0)
                w[i][j]=9999;
        }
    }
    printf("After Sharing routing tables:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
           for(k=0;k<n;k++)
           {
               if(w[i][j]>(w[i][k]+w[k][j]))
                  w[i][j]=w[i][k]+w[k][j];
           }
      }

    }
while(y==1)
    {
        printf("\n Enter the required router:");
        scanf("%d",&j);
        for(i=0;i<n;i++)
        {
            if(i!=j)
                printf("\nDistance to %d :%d\n",i,w[j][i]);
        }
        printf("Want to give another input(Yes=1/No=0):");
        scanf("%d",&y);
    }
}
