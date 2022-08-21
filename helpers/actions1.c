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
    Stack *first = *a;
    Stack *last = *a;
    if(check_stack_length(*a) <= 1)
        return ;
    while(last->next != NULL)
        last = last->next;
    *a = first->next;
    first->next = NULL;
    last->next = first;
    ft_printf("ra\n");
}


void rb(Stack **b)
{
    Stack *first = *b;
    Stack *last = *b;
    if(check_stack_length(*b) <= 1)
        return ;
    while(last->next != NULL)
        last = last->next;
    *b = first->next;
    first->next = NULL;
    last->next = first;
    ft_printf("rb\n");
}