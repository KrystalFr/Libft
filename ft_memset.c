/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:36:32 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/09 14:52:26 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tab;
	size_t	i;

	tab = s;
	i = 0;
	while (i < n)
		tab[i++] = c;
	return (s);
}
