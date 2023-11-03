/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:35:34 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/08 13:24:41 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (ptr + i);
		i++;
	}
	if (ptr[i] == (char)c)
		return (ptr + i);
	return (NULL);
}
/*
int	main()
{
	char a[] = "chico batata";
	printf("%s\n", ft_strchr(a, '\0'));
	printf("%s\n", strchr(a, '\0'));
}*/
