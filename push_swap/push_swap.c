/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:13 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/27 18:38:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

int main(int ac, char **av)
{
    Stack *a;
    Stack *b;
    Actions action;

    a = (Stack *)malloc(sizeof(*a));
    get_ints(av, a);
    action = init();
    
    Stack *t;

    t = a;
    while(t->next != NULL)
    {
        ft_printf("%d\n", t->n);
        t = t->next;
    }
    return (0);
}

// gcc main.c   ../libft/libft.a   ../ft_printf/libftprintf.a

//gcc push_swap/push_swap.c helpers/*.c libft/libft.a ft_printf/libftprintf.a