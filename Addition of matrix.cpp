#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],s[2][2],r,c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Enter elements of 1st matrix[%d][%d]:",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Enter elements of 2nd matrix[%d][%d]:",r,c);
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            s[r][c]=a[r][c]+b[r][c];
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t",s[r][c]);
        }
        printf("\n");
    }
}
