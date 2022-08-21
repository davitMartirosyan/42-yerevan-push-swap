//     while(tst->next != NULL)
//     {
//         ft_printf("%d ", tst->n);
//         tst = tst->next;
//     }



//         // action.sa(&a, a, a->next);
//     while(a->next != NULL)
//     {
//         ft_printf("%d\n", a->n);
//         a = a->next;
//     }

//         while(t1->next != NULL)
//     {
//         ft_printf("%d\n", t1->n);
//         t1 = t1->next;
//     }
//     ft_printf("____________________\n");
//     while(t2->next != NULL)
//     {
//         ft_printf("%d\n", t2->n);
//         t2 = t2->next;
//     }

//     void get_ints(char **av, Stack *a)
// {
//     int i;
//     int index;
//     Stack *tmp;
    
//     i = 1;
//     index = 0;
//     tmp = a;
//     while(av[i])
//     {
//         tmp->n = ft_atoi(av[i]);
//         tmp->index = index;
//         tmp->next = (Stack *)malloc(sizeof(*tmp));
//         tmp = tmp->next;
//         i++;
//         index++;
//     }
//     tmp->next = NULL;
// }

//  while(a->next != NULL)
//     {
//         ft_printf("%d\n", a->n);
//         a = a->next;
//     }


// void store(Stack *a, t_important *data)
// {
//     int i;
//     char **collection_of_ints;
//     Stack *tmp;

//     tmp = a;
//     collection_of_ints = ft_split(data->collection, ' ');
//     i = 0;
//     while(collection_of_ints[i])
//     {
//         tmp->n = ft_atoi(collection_of_ints[i]);
//         tmp->index = i;
//         tmp->next = malloc(sizeof(*tmp));
//         tmp = tmp->next;
//         i++;
//     }
//     tmp->next = NULL;
// }


    // action.sa(a, (*a)->next);                        // OK
    // action.sb(a, (*a)->next);                        // OK
    // action.ss(a, (*a)->next, b, (*b)->next);         // OK
    // action.pb(a, b);                                 // OK
// raddix(&a, &b, data, action);

// Stack *k;
//     k = malloc(sizeof(Stack));
//     k->n = 4;
//     k->next = malloc(sizeof(Stack));
//     k->next->n = 1;
//     k->next->next = malloc(sizeof(Stack));
//     k->next->next->n = 0;
//     k->next->next->next = malloc(sizeof(Stack));
//     k->next->next->next->n = 2;
//     k->next->next->next->next = NULL;
//    Stack *tmp = k;
//    //  ft_printf("\n");
//    action.ra(&tmp);
//    while(tmp != NULL)
//    {
//       ft_printf("%d ", tmp->n);
//       tmp = tmp->next;
//    }