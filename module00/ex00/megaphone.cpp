/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:08:21 by hojsong           #+#    #+#             */
/*   Updated: 2023/04/17 16:08:14 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(i = 1; i < argc; i++)
    {
        i2 = 0;
        while (argv[i][i2])
        {
            std::cout << static_cast<char>(std::toupper(argv[i][i2]));
            i2++;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}
