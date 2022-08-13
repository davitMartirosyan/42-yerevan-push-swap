/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:05:03 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/13 05:03:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void pa(Stack **a, Stack **b)
{
    Stack *t;
    if(*b == NULL)
        return;
    t = *b;
    *b = (*b)->next;
    t->next = *a;
    *a = t;
    ft_printf("pa\n");
}

void pb(Stack **a, Stack **b)
{
    Stack *t;
    
    if(*a == NULL)
        return ;
    t = *a;
    *a = (*a)->next;
    t->next = *b;
    *b = t;
    ft_printf("pb\n");   
}

void ra(Stack **a)
{
   return ;
}

void rb(void)
{
    ft_printf("Rotate B\n");
}