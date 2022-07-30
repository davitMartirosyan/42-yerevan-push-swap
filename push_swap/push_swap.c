/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/30 15:24:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"
#include <unistd.h>

int main(int ac, char **av)
{
    t_d *data;
    Stack *a;
    Stack *b;
    
    if(ac > 2)
       data = generate_int_arr(string(av, stack_nums_counter(av)));
    return (0);
}

// gcc main.c   ../libft/libft.a   ../ft_printf/libftprintf.a

//gcc push_swap/push_swap.c helpers/*.c format_parsing/*.c libft/libft.a ft_printf/libftprintf.a