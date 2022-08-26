/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:50:37 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/26 04:40:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void a_b_sort(Stack **a, Stack **b, t_important *data, Actions action)
{
    Stack *check_b;
    Stack **tmp_a;
    Stack **tmp_b;
    int mx;
    int step;
    
    mx = data->length;
    tmp_a = a;
    tmp_b = b;
    while(*tmp_a != NULL)
    {
        if((*tmp_a)->n >= 0 && (*tmp_a)->n <= 19)
        {
            step = 0;
            if((*tmp_a)->idx <= (mx / 2))
            {
                while(step < (*tmp_a)->idx)
                {
                    action.ra(tmp_a);
                    step++;
                }
            }
                action.pb(tmp_a, tmp_b);
        }
        (*tmp_a) = (*tmp_a)->next;
    }
    
    while(*a != NULL)
    {
        ft_printf("n: %d\n", (*a)->n);
        (*a) = (*a)->next;
    }
    // ft_printf("%d", data->length);
}