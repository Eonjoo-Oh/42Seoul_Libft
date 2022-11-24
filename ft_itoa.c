/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonjoo <eonjoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:42:16 by eoh               #+#    #+#             */
/*   Updated: 2022/11/25 00:15:07 by eonjoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int get_size(int temp)
{
	int size;
	size = 0;

	if (temp < 0)
	{
		size = 1;
		temp *= -1;
	}
	while (temp > 0)
	{
		temp /= 10;
		size++;
	}
	return (size);
}

char *ft_itoa(int n)
{
	int size;
	int i;
	int temp;
	char *result;

	temp = n;
	size = get_size(temp);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == 0)
		return (0);
	result[size] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[size - 1] = n % 10 + '0';
		n /= 10;
		i++;
	}
	return (result);
}
