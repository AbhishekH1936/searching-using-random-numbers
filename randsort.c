#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
void main()
{

    int i,j,a[100],temp,max,flag=0,n,low=0,high=0,mid,key;
   // clrscr();
    printf("\nenter the no of ele");
    scanf("%d",&n);
    high=n-1;
    printf("\nenter the array elements ");
    for(i=0;i<n;i++)
    {

        a[i]=rand()%100;
    }
    printf("\nthe array ele are");
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }
    for(i=0;i<n-1;i++)
    {


        for(j=0;j<n-i-1;j++)
       {

        if(a[j]>a[j+1])
        {


            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

       }
   }
   printf("\nthe array after sorting");
   for(i=0;i<n;i++)
    printf("  %d",a[i]);
    printf("\nenter the key ele to be searched ");
    scanf("%d",&key);
    while(low<=high)
    {

	mid=(low+high)/2;
	if(a[mid]==key)
	{


	    printf("%d  found at pos %d",key,mid );
	    flag=1;
	    break;
	}
	else if(key>a[mid])
	{


	    low=mid+1;
	}
	else
	{
	    high=mid-1;
	    }


    }
    if(flag!=1)
    {
	printf("element not found");
    }
    //getch();
}
