/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:22:49 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/23 22:00:43 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	upper(unsigned int i, char *s)
{
	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
}

int	main()
{
	char s[] = "fhsjdAfsDFSFsjdf67";
	ft_striteri(s, upper);
	printf("%s\n", s);
	return (0);
}*/