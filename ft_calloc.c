/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:54:55 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/12 23:35:47 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*dest;
	unsigned char	*dest_zero;

	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	dest_zero = (unsigned char *)dest;
	ft_bzero(dest_zero, (nmemb * size));
	return (dest);
}
