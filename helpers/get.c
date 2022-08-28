/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:28:12 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/26 02:31:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

int is_sorted(int *ints, int len)
{
    if(len == 1 || len == 0)
        return (1);
    if(ints[len - 1] < ints[len - 2])
        return (0);
    
    return is_sorted(ints, len - 1);
}

void b_fly(Stack **a, Stack **b, t_important *data, Actions action)
{
    int idx_c;
    
    idx_c = 0;
    while((*a) != NULL)
    {
        if((*a)->n <= idx_c)
        {
            action.pb(a, b);
            action.rb(b);
            idx_c++;
        }
        else if((*a)->n <= idx_c + 3)
        {
            action.pb(a, b);
            idx_c++;
        }
        else
            action.ra(a);
    }
}

Actions init(void)
{   
    Actions *init;

    init = (Actions *)malloc(sizeof(*init));
    init->pa = &pa;
    init->pb = &pb;
    init->sa = &sa;
    init->sb = &sb;
    init->ss = &ss;
    init->ra = &ra;
    init->rb = &rb;
    init->rr = &rr;
    init->rra = &rra;
    init->rrb = &rrb;
    init->rrr = &rrr;
    return (*init);
}