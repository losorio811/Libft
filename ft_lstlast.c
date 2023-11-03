/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:00:22 by loosorio          #+#    #+#             */
/*   Updated: 2023/11/03 20:57:38 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main()
{
	char	*str = "ola";
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
	ptr5->content = str;
	printf("%s\n", (char *)ft_lstlast(ptr1)->content);
	free(ptr1);
	free(ptr2);
	free(ptr3);
	free(ptr4);
	free(ptr5);
	return (0);
}*/