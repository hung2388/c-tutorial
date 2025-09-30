#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[5000];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        int k=0;
        while(1)
        {
            if(s[k++]=='@')
            break;
        }
        for(int j=1;j<k-2;j++)
        {
            s[j]='*';
        }
        printf("%s\n",s);
    }
}
