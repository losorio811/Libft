/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:21:43 by loosorio          #+#    #+#             */
/*   Updated: 2023/10/24 22:28:29 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int	main()
{
	char s[] = "asdfgh";
	int fd = open("file3.txt", O_RDWR | O_CREAT, 0742);
	ft_putendl_fd(s, fd);
	ft_putendl_fd(s, 1);
	return (0);
}*/