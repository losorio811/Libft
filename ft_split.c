/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:02:21 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/19 20:58:05 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
			{
				if (s[i] == 0)
					break ;
				i++;
			}
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	ptr = (char **)ft_calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && s[i])
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			ptr[j++] = ft_substr(s, start, (i - start));
		}
	}
	return (ptr);
}
/*
int	main()
{
	char	**s1;
	int	i = 0;
	char s[] = "                  olol     dgdgdg";
	
	s1 = ft_split(s, ' ');
	while (s1[i])
	{
		printf("%s\n", s1[i]);
		free(s1[i++]);
	}
	free(s1);
}*/