/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 05:19:10 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/16 01:27:02 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, s + i, 1);
		i++;
	}
}
