#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    scanf("%[^\n]",arr);
    int n=strlen(arr);
    int ispalindrome;
    int maxlength=1;
    
    int start=0;
    if(n==1)
    {
        printf("%s",arr);
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            maxlength=2;
            start=i;
            break;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            int len=j-i+1;
            if(len>maxlength)
            {
            ispalindrome=1;
            for(int k=0;k<len/2;k++)
            {
                if(arr[k+i]!=arr[j-k])
                {
                     ispalindrome=0;
                    break;
                }
            }
            
            if(ispalindrome)
            {
                maxlength=len;
                start=i;
            }
            }
        }
    }
    for(int i=start;i<=start+maxlength-1;i++)
    {
        printf("%c",arr[i]);
    }
}
