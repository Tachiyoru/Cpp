/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:59:58 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 20:21:01 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	outfilename;
	std::ifstream	infile;
	std::ofstream	newfile;
	std::string		line;

	if (ac != 4)
		return(std::cout<<"Argument error"<<std::endl, 1);

	//open files
	filename = av[1];
	outfilename = filename + ".replace";
	infile.open(filename.c_str());
	if (infile.is_open() == false)
		return (std::cout << "Open infile failed" << std::endl, 2);
	newfile.open(outfilename.c_str());
	if (newfile.is_open() == false)
		return (std::cout << "Open/Creation outfile failed" << std::endl, 3);

	//go trough line and make the changes
	std::getline(infile, line, '\0');
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	for (size_t index = 0; index < line.length(); index++){
		if (index == line.find(s1))
		{
			line.erase(index, s1.length());
			line.insert(index, s2);
			index += s2.length();
		}
	}
	newfile << line;
	infile.close();
	newfile.close();
	return (0);
}
