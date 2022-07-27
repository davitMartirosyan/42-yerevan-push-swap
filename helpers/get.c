/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:28:12 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/27 17:19:50 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void get_ints(char **av, Stack *a)
{
    int i;
    int index;
    Stack *tmp;
    
    i = 1;
    index = 0;
    tmp = a;
    while(av[i])
    {
        tmp->n = ft_atoi(av[i]);
        tmp->index = index;
        tmp->next = (Stack *)malloc(sizeof(*tmp));
        tmp = tmp->next;
        i++;
        index++;
    }
    tmp->next = NULL;
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