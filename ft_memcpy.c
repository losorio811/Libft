/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:59:40 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/08 16:22:06 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		i;

	if (!src && !dest)
		return (NULL);
	ptrd = (char *)dest;
	ptrs = (const char *)src;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (ptrd);
}
/*
int	main()
{
	char d[20];
	const char s[] = "chico batata";
	int i = 0;
	ft_memcpy(d, s, 6);
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}
	return (0);
}*/
