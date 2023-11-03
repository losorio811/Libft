/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:04:56 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/10 21:59:08 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (dst[len] && len < size)
		len++;
	i = 0;
	while (src[i] && (len + i + 1) < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len + i < size)
		dst[len + i] = '\0';
	while (src[i])
		i++;
	return (len + i);
}
/*
int	main()
{
	char d[] = "Ola, ";
	char s[] = "como estas";
	printf("%zu\n", ft_strlcat(d, s, 20));
	return (0);
}*/
