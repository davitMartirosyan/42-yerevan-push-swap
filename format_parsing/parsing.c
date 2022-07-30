/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:16:21 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/30 15:32:16 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static int check_char(char c)
{
    if((c < '0' || c > '9') && 
        c != ' ' && c != '-')
        return (0);
    return (1);
}

char *string(char **av, int str_size)
{
    int i;
    int c;
    int j;
    char *str;

    i = 0;
    j = -1;
    str = malloc(sizeof(char) * ((str_size * 2) + 1));
    if(!str)
        return (NULL);
    while(av[++i])
    {
        c = -1;
        
        while(av[i][++c])
        {
            if(!check_char(av[i][c]))
            {
                free(str);
                return (0);
            }
            str[++j] = av[i][c];
        }
        str[++j] = ' ';
    }
    str[j] = '\0';
    return (str);
}

t_d *generate_int_arr(char *string)
{
    if(string == NULL)
        ft_printf("Error");
    return (0);
}