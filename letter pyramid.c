#include<stdio.h>
main()
{
    int a,x,y,z;
    printf("Enter number:");
    scanf("%d",&a);
    z=0;
    for(y=a; y>=1; y--)
    {
        for(x=1; x<=y; x++)
            printf("%c%s",y + 'a' - 1,x<y ? "_":"");
        printf("\n");
    }
    return 0;
    getch();
}
