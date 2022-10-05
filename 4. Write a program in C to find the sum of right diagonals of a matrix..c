
main()
{
    int a[3][3],i,j,s=0;
    printf("enter 9 numbers\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             scanf("%d",&a[i][j]); }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);

        } printf("\n");
    } for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { if(j==2-i)
        printf(" %d",a[i][j]);
         } printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { if(j==2-i)
        s=s+a[i][j];
         }
    }
    printf("sum of left diagonal is %d",s);
    return 0;
}
