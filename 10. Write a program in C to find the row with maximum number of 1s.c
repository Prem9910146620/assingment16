main()
{
    int a[3][3],i,j,max=0,sum=0,c=1,d;
    printf("enter 9 number\n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
        { printf(" %d",a[i][j]);

        } printf("\n");
    }

    for(i=0;i<3;i++)
    { sum=0;
     c=1;
         for(j=0;j<3;j++)
        { if(a[i][j]==1)
        { sum=sum+a[i][j];
         }
          } if(sum>max)
         { c=c+i;
            d=c;
              max=sum;
           }
    }
   printf("raw %d is the maximum no. of one's is %d ",d,max);

    return 0;
}
