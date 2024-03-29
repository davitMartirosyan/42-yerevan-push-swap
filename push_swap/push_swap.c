/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/22 12:54:35 by dmartiro         ###   ########.fr       */
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
    __check__collection(data);
    __collecting_ints(data);
    action = init();
    a = NULL;
    b = NULL;
    store(&a, data);
    a_b_sort(&a, &b, data, action);
    return (0);
}

// gcc main.c   ../libft/libft.a   ../ft_printf/libftprintf.a

//gcc push_swap/*.c helpers/*.c format_parsing/*.c libft/libft.a ft_printf/libftprintf.a