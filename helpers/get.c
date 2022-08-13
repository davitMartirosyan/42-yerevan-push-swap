/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:28:12 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/13 06:22:23 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void __collecting_ints(t_important *data)
{
    int i;
    int c;
    int pos;
    int max;
    
    i = 0;
    data->split = ft_split(data->collection, ' '); 
    while(data->split[i])
        i++;
    data->length = i;
    data->collection_of_ints = malloc(sizeof(int) * (i + 0));
    i = -1;
    while(data->split[++i])
        data->collection_of_ints[i] = ft_atoi(data->split[i]);
    i = data->length - 1;
    c = 0;
    pos = 0;
    max = 0;
    while(c <= i)
    {
        
        c++;
        pos++;
    }
}

int is_sorted(int *ints, int len)
{
    if(len == 1 || len == 0)
        return (1);
    if(ints[len - 1] < ints[len - 2])
        return (0);
    
    return is_sorted(ints, len - 1);
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