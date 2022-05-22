/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:11:22 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/22 22:47:09 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	countdown(int i)
{
	unsigned int	count;

	if (i <= 0)
		count = 1;
	else
		count = 0;
	while (i != 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			c;
	char			*str;
	unsigned int	count;

	count = countdown(n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		c = n % 10;
		if (n < 0)
			c = -c;
		str[--count] = (c + '0');
		n /= 10;
	}
	return (str);
}
