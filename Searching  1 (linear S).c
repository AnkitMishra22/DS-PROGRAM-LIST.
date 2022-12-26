#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n],ele,pos=0,flag=0;
    printf("Enter array element : ");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter any number you want to search : ");
    scanf("%d",&ele);
    for(int i=0 ; i<n ; i++)
    {   pos++;
        if(arr[i]==ele)
        {
            printf("number found at position %d",pos);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("element not found in array.");
    }
}
