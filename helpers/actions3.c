/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:10:24 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/17 15:47:35 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void rra(void)
{
    ft_printf("Rotate Reverse A\n");
}

void rrb(void)
{
    ft_printf("Rotate Reverse B\n");
}

void rrr(void)
{
    ft_printf("Rotate Reverse A & B the same time\n");
}

int check_stack_length(Stack *stack)
{
    Stack *t;
    int i;

    t = stack;
    i = -1;
    while(t != NULL)
    {
        t = t->next;
        ++i;
    }
    return (i);
}