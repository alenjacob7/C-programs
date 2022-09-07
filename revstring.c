#include <stdio.h>
#include<string.h>

int main()
{
    char buffer[100]  = "Alen";
    char newstr[100];
    int i, j, n;
    n = strlen(buffer);
    for(i=n-1, j=0 ;i>=0;i--, j++)
	{
		newstr[j] = buffer[i];
	}
    
    printf("%s", newstr);
    return 0;
}
