/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/31 15:53:24 by dmartiro         ###   ########.fr       */
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
    action = init();
    data = malloc(sizeof(*data));
    stack_nums_counter(av, data);
    collect(av, data);
    if(!data->collection)
        errno();
    store(a, data); // store numbers in stack a
    ft_printf("%d", a->n);
    // stack_nums_counter().collect().store();
    return (0);
}

// gcc main.c   ../libft/libft.a   ../ft_printf/libftprintf.a

//gcc push_swap/push_swap.c helpers/*.c format_parsing/*.c libft/libft.a ft_printf/libftprintf.a