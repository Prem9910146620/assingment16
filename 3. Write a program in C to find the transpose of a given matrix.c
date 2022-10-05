
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
    }  printf("transpose of matrix\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[j][i]);

        } printf("\n");
    }



    return 0;
}
