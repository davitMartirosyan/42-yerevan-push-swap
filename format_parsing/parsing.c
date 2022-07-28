#include "../includes/header_push_swap.h"

char *combine(char const *dst, char const *src)
{
    int dstlen;
    int srclen;
    char *join;
    int i;
    int c;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    join = (char *)malloc(sizeof(char) * (dstlen + srclen + 1));
    if(!join)
        return (NULL);
    i = -1;
    while(dst[++i])
        join[i] = dst[i];
    c = -1;
    while(src[++c])
        join[i++] = src[c];
    join[i + c] = '\0';
    return (join);
}

// static char *to_string(char **av, int length)
// {
//     int i;

//     if(length <= 0)
//         return (NULL);
    
// }

void stack_nums(char **av)
{
    int i;
    int charcount;
    char *str_of_nums;
    char *tmp_buffer;

    i = 1;
    charcount = 0;
    while(av[++i])
        charcount += ft_strlen(av[i]);
    
}



// i = 1;
// str_of_nums = (char *)malloc(sizeof(char) * (charcount * 2));
// if(!str_of_nums)
//     return (NULL);
// while(av[i])
// {
//     tmp_buffer = ft_strjoin(av[i], ",");
//     str_of_nums = ft_strjoin(str_of_nums, tmp_buffer);
//     free(tmp_buffer);
//     i++;
// }