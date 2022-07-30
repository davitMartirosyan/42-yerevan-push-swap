/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_push_swap.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:20:43 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/30 15:23:59 by dmartiro         ###   ########.fr       */
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

typedef struct s_d
{
    int len;
    int *stack_nums;  
} t_d;

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
char *string(char **av, int str_size);
int stack_nums_counter(char **av);
char *combine(char *dst, char *src);

t_d *generate_int_arr(char *string);

Actions init(void);

int errno(void);

#endif