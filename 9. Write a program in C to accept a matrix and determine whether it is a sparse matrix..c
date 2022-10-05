

main()
{
    int a[10][10],i,m,n,j,count=0;
    printf("enter the size for m:\n");
    scanf("%d",&m);
    printf("enter the size for n:\n");
    scanf("%d",&n);

    printf("enter %d numbers\n",m*n);
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
        { scanf("%d",&a[i][j]); }
    }
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
        {
             printf(" %d",a[i][j]);
             if(a[i][j]> 0)
             { count++; }
          } printf("\n");
    }

     if( count>(m*n)/2 )
       { printf("sparse matrix"); }
     else
        { printf("dense matrix"); }

}
