/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/14 04:53:02 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"
#include <unistd.h>

int main(int ac, char **av)
{
    Actions action;
    Stack *a;
    Stack *b;
    t_important *data;
    
    if(ac < 2)
        return (-1);
    data = malloc(sizeof(*data));
    stack_nums_counter(av, data);
    collect(av, data);
    if(!data->collection)
        errno();
    if(__repeats__(data))
        errno();
    if(is_sorted(data->collection_of_ints, data->length))
        ft_printf("is sorted\n");
    __collecting_ints(data);
    action = init();
    a = malloc(sizeof(*a));
    b = malloc(sizeof(*b));
    store(a, data);
    raddix(&a, &b, data, action);
    return (0);
}

// gcc main.c   ../libft/libft.a   ../ft_printf/libftprintf.a

//gcc push_swap/*.c helpers/*.c format_parsing/*.c libft/libft.a ft_printf/libftprintf.a