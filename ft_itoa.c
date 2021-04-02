#include "libft.h"



#include <stdio.h>

static int countingdigit(int n)
{
    int lgnb;

    lgnb = 0;
    while (n !=0 )
    {
        n = n/10;
        lgnb++;
    }
    return (lgnb);
}

char	*ft_itoa(int n)
{
    int index;
    int sign;
    int nbdigit;
    char *dest;
    int cpn;

    nbdigit = 0;

   

    if (n == 0)
    {
        sign = 1;
        nbdigit = 1;
    }    
    else
    {
        if (n < 0)
        {
        
            sign = -1;
            nbdigit++;
        }    
        else
            sign = 1;    
        nbdigit = nbdigit + countingdigit(n * sign);
    }
   
    dest = malloc(sizeof(char) * nbdigit + 1);
    if (dest == NULL)
        return (NULL);
    
    if (n == INT_MIN)
     {
         cpn = INT_MIN;
          n++;
     }   
       

    index = nbdigit-1;
  
    n = n * sign;    
  
    while (n >= 10)
    {
        dest[index] = '0' + n % 10;
     
        n = n /10;
        index--;
    }
    dest[index] = '0' + n;
    if ( sign < 0)
        dest[0] = '-';
    if (cpn == INT_MIN)
        dest[10] = '0' + 8;


    dest[nbdigit] = '\0';
    
    return(dest);

}

