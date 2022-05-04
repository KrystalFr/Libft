/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:01:14 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/04 03:20:31 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif