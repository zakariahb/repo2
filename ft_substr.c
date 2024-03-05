#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i = 0;
    if (*s == '\0')

    return NULL;
    char * p1 = malloc (len * sizeof(char));
	    if (p1 != NULL)
	    {
		    while(i <= len )
		    {
			    p1[i] = s[start + i];
			    i++;
		    }


		    p1[i] = '\0';
	    }
    return p1;

}
int main ()
{
	printf("substring :%s\n", ft_substr("zakaria is the best", 7 , 9));
	
}
