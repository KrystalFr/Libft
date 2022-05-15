/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 06:28:54 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/16 01:27:32 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}
