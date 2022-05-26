/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:02:47 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/26 05:53:09 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int	count_c(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*start(char *s, char c)
{
	size_t	i;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

size_t	gap(char *first, char *last)
{
	size_t	diff;

	diff = last - first;
	return (diff);
}

void	loop(char *s, char c)
{
	char *tmp;
	
}

/*char **ft_split(char const *s, char c)
{

}*/

int main()
{
  char *str = "bonsoir coucou salut";
  char c = ' ';

  loop(str, c);
  return 0;
}