#include "../includes/header_push_swap.h"

int stack_nums_counter(char **av)
{
    int i;
    int charcount;
    char *str_of_nums;
    char *tmp_buffer;

    i = 0;
    charcount = 0;
    while(av[++i])
        charcount += ft_strlen(av[i]);
    return (charcount);
}

char *combine(char *dst, char *src)
{
    int i;
    int c;
    int dstlen;
    int srclen;
    char *comb;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    comb = malloc(sizeof(char) * (dstlen + srclen + 1));
    i = -1;
    while(dst[++i])
        comb[i] = dst[i];
    c = 0;
    while(src[c])
    {
        if(src[c] == ',' || src[c] == ' ')
        {
            c++;
            continue;
        }
        comb[i++] =  src[c++];
    }
    return (comb);
}

char *string(char **av, int str_size)
{
    int i;
    int c;
    char *point;

    i = 1;
    point = (char *)malloc(sizeof(char) * ((str_size * 2) + 1));
    if(!point)
        return (NULL);
    while(av[i])
    {
        point = combine(point, av[i]);
        i++;
    }
    return (point);
}