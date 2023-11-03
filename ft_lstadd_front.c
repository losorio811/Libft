/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:21:44 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/31 23:04:53 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	t_list	*ptr1;
	t_list	*ptr2;
	char	*str1 = "ola";
	char	*str2 = "adeus";
	ptr1 = ft_lstnew(str1);
	ptr2 = ft_lstnew(str2);
	printf("ptr1 mem: %p\n", (void *)ptr1);
	printf("ptr2 mem: %p\n", (void *)ptr2);
	ft_lstadd_front(&ptr1, ptr2);
	printf("After ft_lstadd_front: \n\n");
	printf("ptr1 mem: %p\n", (void *)ptr1);
	printf("ptr2 mem: %p\n", (void *)ptr2);
}*/