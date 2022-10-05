
main()
{
    int a[3][3],i,j,s=0,k;
    int b[3][3],c[3][3] ;
    printf("enter 9 numbers for first matrix\n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { scanf("%d",&a[i][j]); }
    }
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",a[i][j]);
           } printf("\n");
           }

           printf("enter 9 numbers for second matrix\n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { scanf("%d",&b[i][j]); }
    }
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",b[i][j]);
          } printf("\n");
           }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  for(k=0;k<3;k++)
            { s=s+(a[i][k]*b[k][j]); }
            c[i][j]=s;
                s=0;
           }

           } printf("multiplication of two matrix\n");
            for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",c[i][j]);
          } printf("\n");
           }

 return 0;
}
