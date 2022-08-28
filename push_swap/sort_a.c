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
    if(data->length == 2)
    {
        if((*a)->n > (*a)->next->n)
        action.ra(a);
    }
    else if(data->length == 3)
        tripple(a);
    else if(data->length == 4)
        quadruple(a, b);
    else if(data->length == 5)
        quintuple(a, b);
    else if(data->length > 5 && data->length <= 100)
        centuple(a, b, data);
}