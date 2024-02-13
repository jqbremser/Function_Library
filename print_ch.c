/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:55:33 by jbremser          #+#    #+#             */
/*   Updated: 2024/02/13 11:12:34 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_ch(char c, int *check)
{
	if (*check == -1)
		return (-1);
	if (write(1, &c, 1) == -1)
	{
		*check = -1;
		return (-1);
	}
	return (1);
}
