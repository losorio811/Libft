/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:10:04 by loosorio          #+#    #+#             */
/*   Updated: 2023/11/02 16:31:55 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int	main()
{
	t_list	*ptr1 = malloc(sizeof(t_list));
	t_list	*ptr2 = malloc(sizeof(t_list));
	t_list	*ptr3 = malloc(sizeof(t_list));
	t_list	*ptr4 = malloc(sizeof(t_list));
	t_list	*ptr5 = malloc(sizeof(t_list));
	ptr1->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr4;
	ptr4->next = ptr5;
	ptr5->next = NULL;
	printf("%d\n", ft_lstsize(ptr1));
	return (0);
}*/