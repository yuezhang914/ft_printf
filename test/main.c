/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 22:28:39 by yzhang2           #+#    #+#             */
/*   Updated: 2025/06/09 22:29:57 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h> // 用于 INT_MAX 等
#include <stdio.h>  // 为了对比标准 printf

int	main(void)
{
	void	*ptr;
	int		len_ft;
	int		len_std;

	ptr = (void *)0x1234ABCD;
	len_ft = ft_printf("ft:   Char: [%c]\n", 'A');
	len_std = printf("std:  Char: [%c]\n", 'A');
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   String: [%s]\n", "Hello, World!");
	len_std = printf("std:  String: [%s]\n", "Hello, World!");
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   NULL string: [%s]\n", (char *)NULL);
	len_std = printf("std:  NULL string: [%s]\n", (char *)NULL);
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   Decimal: [%d] [%i]\n", 42, -42);
	len_std = printf("std:  Decimal: [%d] [%i]\n", 42, -42);
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   Unsigned: [%u] [%u]\n", 42, UINT_MAX);
	len_std = printf("std:  Unsigned: [%u] [%u]\n", 42, UINT_MAX);
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   Hex (x/X): [%x] [%X]\n", 3735928559u,
			3735928559u);
	len_std = printf("std:  Hex (x/X): [%x] [%X]\n", 3735928559u, 3735928559u);
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   Pointer: [%p]\n", ptr);
	len_std = printf("std:  Pointer: [%p]\n", ptr);
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	len_ft = ft_printf("ft:   Percent sign: [%%]\n");
	len_std = printf("std:  Percent sign: [%%]\n");
	printf("Return value: ft = %d, std = %d\n\n", len_ft, len_std);
	return (0);
}
