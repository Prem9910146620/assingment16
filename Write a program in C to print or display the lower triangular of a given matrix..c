
main()
{
    int a[3][3],i,j;

    printf("enter 9 numbers\n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { scanf("%d",&a[i][j]); }
    }
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",a[i][j]);
          } printf("\n");
    }

    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { if(i>j)
          { a[i][j]=0; }

          }
    } printf("lower triangle\n");
 for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",a[i][j]);
          } printf("\n");
    }



    return 0;
}
