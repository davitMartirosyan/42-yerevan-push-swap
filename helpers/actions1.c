/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:05:03 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/17 16:36:51 by dmartiro         ###   ########.fr       */
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
    Stack *first;
    Stack *last;
    if(check_stack_length(*a) <= 1)
        return ;

    first = *a;
    last = *a;
    while(last->next != NULL)
        last = last->next;
    *a = first->next;
    first->next = NULL;
    last->next = first;
    return ;
}

void rb(Stack **b)
{
    if(check_stack_length(*b) <= 1)
        return ;
    ft_printf("rb\n");
}