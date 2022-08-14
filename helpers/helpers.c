/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 02:35:43 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/14 03:55:54 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_push_swap.h"

void __collecting_ints(t_important *data)
{
    __store__(data);
    __sorted__indacies(data);
}

void __store__(t_important *data)
{
    int i;

    i = -1;
    data->split = ft_split(data->collection, ' '); 
    while(data->split[++i]);
    data->length = i;
    data->collection_of_ints = malloc(sizeof(int) * (i + 0));
    i = -1;
    while(data->split[++i])
        data->collection_of_ints[i] = ft_atoi(data->split[i]);
}

void __sorted__indacies(t_important *data)
{
    int sorted[data->length];
    int i;
    int c;
    
    i = -1;
    while(++i < data->length)
        sorted[i] = data->collection_of_ints[i];
    ___bubble___(sorted, data->length);
    i = -1;
    while(++i < data->length)
    {
        c = -1;
        while(++c < data->length)
        {
            if(sorted[i] == data->collection_of_ints[c])
                data->collection_of_ints[c] = i;
        }
    }
}

int __repeats__(t_important *data)
{
    int i;
    int c;

    i = -1;
    __store__(data);
    while(++i < data->length)
    {
        c = i;
        while(++c < data->length)
            if(data->collection_of_ints[i] == data->collection_of_ints[c])
                return 1;
    }
    return (0);
}