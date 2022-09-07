/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:00 by jofernan          #+#    #+#             */
/*   Updated: 2022/09/06 16:20:00 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *\n";
        return 0;
    }
    for (size_t j = 1; j < (size_t)argc; j++)
    {
        std::string message(argv[j]);
        for (size_t i = 0; i < message.length(); i++)
            std::cout << (char)toupper(message[i]);
    }
    std::cout << "\n";
    return 0;
}
