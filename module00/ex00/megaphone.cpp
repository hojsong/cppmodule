/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:08:21 by hojsong           #+#    #+#             */
/*   Updated: 2023/02/28 13:08:22 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	i = 1;
    while (argv[i])
    {
        i2 = 0;
        while (argv[i][i2])
        {
            std::cout << static_cast<char>(toupper(argv[i][i2]));
            i2++;
        }
        i++;
    }
    std::cout << std::endl;
}
