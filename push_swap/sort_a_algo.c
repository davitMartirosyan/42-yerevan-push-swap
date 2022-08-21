/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_counting_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:50:37 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/17 16:38:22 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void __sort_a__(Stack **a, Stack **b, t_important *data, Actions action)
{
   action.ra(a);
   // action.ra(a);
   Stack *tmp = *a;
   // ft_printf("\n");
   while(tmp != NULL)
   {
      ft_printf("%d ", tmp->n);
      tmp = tmp->next;
   }
   
//  
}