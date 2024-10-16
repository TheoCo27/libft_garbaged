/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:36:28 by tcohen            #+#    #+#             */
/*   Updated: 2024/10/16 13:49:26 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_gar/libft.h"

int main()
{
	char *str;
	char **tab;

	str = ft_strdup("hey\n");
	tab = ft_make_tabstr();
	tab = ft_tabstr_addback(str, tab);
	ft_free_all(tab);
	ft_putstr_fd(str, 1);
	garbage_destroy();
	return (0);
}