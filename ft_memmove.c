/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:22:26 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/08 18:25:04 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		*i;

	if (!src && !dest)
		return (NULL);
	ptrd = (char *)dest;
	ptrs = (const char *)src;
	i = 0;
	if (ptrd < ptrs)
		return (ft_memcpy(ptrd, ptrs, n));
	else if (ptrd > ptrs)
	{
		while (n--)
			ptrd[n] = ptrs[n];
	}
	return (ptrd);
}
/*
int	main()
{
	int i = 0;
	char d[20];
	const char s[] = "chico batata";
	ft_memmove(d, s, 7);
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}
}*/
