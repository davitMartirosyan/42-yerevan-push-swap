/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_push_swap.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:20:43 by dmartiro          #+#    #+#             */
/*   Updated: 2022/08/17 16:28:05 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_PUSH_SWAP_H
# define HEADER_PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"

typedef struct s_stack
{
    int n;
    struct s_stack *next;
    struct s_stack *prev;
} Stack;


typedef struct s_actions
{
    void (*pa)(Stack **a, Stack **b);
    void (*pb)(Stack **a, Stack **b);
    void (*sa)(Stack **a, Stack *x);
    void (*sb)(Stack **b, Stack *x);
    void (*ss)(Stack **a, Stack *x, Stack **b, Stack *y);
    void (*ra)(Stack **a);
    void (*rb)(Stack **b);
    void (*rr)(void);
    void (*rra)(void);
    void (*rrb)(void);
    void (*rrr)(void);
} Actions;

typedef struct s_important
{
    int size;
    int length;
    int  *collection_of_ints;
    char *collection;
    char **split;
    int a_len;
    int b_len;
} t_important;


Actions init(void);

//parser functions
void stack_nums_counter(char **av, t_important *data);
void collect(char **av, t_important *data);
void store(Stack **a, t_important *data);

//Helpers
void __collecting_ints(t_important *data);
void __sorted__indacies(t_important *data);
void ___bubble___(int *arrtmp, int length);
void __store__(t_important *data);
int is_sorted(int *ints, int len);
int __repeats__(t_important *data);
int __check__collection(t_important *data);
//Error functions
int errno(char *err);

//sorting algorithm functions
void __sort_a__(Stack **a, Stack **b, t_important *data, Actions action);
void pa(Stack **a, Stack **b);
void pb(Stack **a, Stack **b);
void sa(Stack **a, Stack *x);
void sb(Stack **b, Stack *x);
void ss(Stack **a, Stack *x, Stack **b, Stack *y);
void ra(Stack **a);
void rb(Stack **b);
void rr(void);
void rra(void);
void rrb(void);
void rrr(void);
int check_stack_length(Stack *stack);
#endif