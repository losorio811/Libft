/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:25:05 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/08 14:53:44 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ft_memset(ptr, '\0', n);
}
/*
int	main()
{
	int i = 0;
	char s[] = "chico batata";
	int len;
	len = strlen(s);
	ft_bzero(s, 4);
	while (i < len)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (0);
}*/
