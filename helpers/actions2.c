/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:07 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/08 02:50:22 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void rr(void)
{
    ft_printf("Rotate A & B the same time\n");
}

void sa(Stack **a, Stack *x)
{
    Stack *tmp;
    
    tmp = x->next;
    x->next = *a;
    (*a)->next = tmp;
    *a = x;
    ft_printf("sa\n");
}

void sb(Stack **b, Stack *x)
{
    Stack *tmp;

    tmp = x->next;
    x->next = *b;
    (*b)->next = tmp;
    *b = x;
    ft_printf("sb\n");
}

void ss(Stack **a, Stack *x, Stack **b, Stack *y)
{
    sa(a, x);
    sb(b, y);
}