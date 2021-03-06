/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <charles.cabergs@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 22:43:22 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/03 14:27:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative_char;
	char	positive_char;

	negative_char = 'N';
	positive_char = 'P';
	if (n < 0)
		write(1, &negative_char, 1);
	else
		write(1, &positive_char, 1);
}
