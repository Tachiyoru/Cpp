/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:18:51 by sleon             #+#    #+#             */
/*   Updated: 2024/01/28 13:18:52 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc > 1)  {
        std::string tmp;
        for (int i = 1; i < argc; i++)  {
            for (int j = i + 1; j < argc; j++)  {
                if (atoi(argv[i]) == atoi(argv[j])) {
                    std::cout << "You cant put multiple times the same number." << std::endl;
                    return (1);
                }
            }
            tmp += argv[i];
            tmp += ' ';
        }
        
        PmergeMe    pmerg(tmp, argc - 1);
        try
        {
            pmerg.fillCont(tmp);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "Error: Need 1 or more arguments." << std::endl;
}