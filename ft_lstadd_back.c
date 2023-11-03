/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:41:16 by loosorio          #+#    #+#             */
/*   Updated: 2023/11/03 19:47:21 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}

/*int	main()
{
	t_list	*ptr1 = malloc(sizeof(t_list));
	t_list	*ptr2 = malloc(sizeof(t_list));
	t_list	*ptr3 = malloc(sizeof(t_list));
	t_list	*ptr4 = malloc(sizeof(t_list));
	t_list	*ptr5 = malloc(sizeof(t_list));
	t_list	*new = malloc(sizeof(t_list));
	ptr1->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr4;
	ptr4->next = ptr5;
	ptr5->next = NULL;
	new->content = "ola";
	ft_lstadd_back(&ptr1, new);
	printf("%s\n", (char *)ptr5->next->content);
	free(ptr1);
	free(ptr2);
	free(ptr3);
	free(ptr4);
	free(ptr5);
	free(new);
	return (0);
}*/