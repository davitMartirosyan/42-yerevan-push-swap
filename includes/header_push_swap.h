/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_push_swap.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:20:43 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/31 15:45:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_PUSH_SWAP_H
# define HEADER_PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"

typedef struct s_stack
{
    int n;
    int index;
    struct s_stack *next;
    struct s_stack *prev;
} Stack;


typedef struct s_actions
{
    void (*pa)(void);
    void (*pb)(void);
    void (*sa)(void);
    void (*sb)(void);
    void (*ss)(void);
    void (*ra)(void);
    void (*rb)(void);
    void (*rr)(void);
    void (*rra)(void);
    void (*rrb)(void);
    void (*rrr)(void);
} Actions;

typedef struct s_important
{
    int size;
    char *collection;
} t_important;

void pa(void);
void pb(void);
void sa(void);
void sb(void);
void ss(void);
void ra(void);
void rb(void);
void rr(void);
void rra(void);
void rrb(void);
void rrr(void);

void get_ints(char **av, Stack *a);

void stack_nums_counter(char **av, t_important *data);
void collect(char **av, t_important *data);
void store(Stack *a, t_important *data);

int errno(void);

Actions init(void);

#endif