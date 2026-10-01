#include <stdio.h>
#include <stdlib.h>
void Towerofhanoi(int n,char source,char dest,char temp)
{
    if(n>1)
    {
        Towerofhanoi(n-1,source,temp,dest);
        printf("\n move %d disc from %c to %c",n,source,dest);
        Towerofhanoi(n-1,temp,dest,source);
    }
    else
        printf("\n move%d disc from %c to %c",n,source,dest);
}
int main()
{
    int n;
    printf("\n read number of discs:");
    scanf("%d",&n);
    Towerofhanoi(n,'S','D','T');
    return 0;
}
