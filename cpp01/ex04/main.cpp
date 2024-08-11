/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:58:44 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/11 19:43:35 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcessor.hpp"

int main(int argc, char **argv)
{
	if (argc < 4)
		return (std::cerr << "Usage: "<< argv[0] << " [filename] [str1] [str2]" << std::endl, 1);

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (argc == 4 && (s1.empty() || s2.empty()))
	{
		std::cerr << "Error: str1 and str2 can't be empty" << std::endl;
		std::cerr << "Usage: "<< argv[0] << " [filename] [str1] [str2]" << std::endl;
		return 1;
	}

	FileProcessor processor(filename, s1, s2);
	processor.processAndSaveFile();
	return 0;
}