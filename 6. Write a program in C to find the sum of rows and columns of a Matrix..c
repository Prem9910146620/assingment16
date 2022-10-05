int main()
{
    int a[10][10],i,j,n,s[10]={0},s2[10]={0};
    printf("enter the number of raw and column ");
    scanf("%d",&n);
    printf("enter matrix element\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { printf( " %d",a[i][j]);
        } printf("\n");
    }
      printf("sum of raw\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { s[i]=s[i]+a[i][j];
        } printf("%d",s[i]);
        printf("\n");
    }
   printf("sum of column\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { s2[i]=s2[i]+a[j][i];
        } printf("%d",s2[i]);
        printf("\n");
    }





    return 0;

}
