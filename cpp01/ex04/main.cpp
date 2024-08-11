/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:58:44 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/11 16:58:46 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class FileProcessor
{
	public:
		FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2);
		~FileProcessor();

	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
};

FileProcessor::FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2)
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
}

FileProcessor::~FileProcessor()
{
}

int main(int argc, char **argv)
{
	if (argc < 4)
		return (std::cout << "Usage: "<< argv[0] << " [filename] [str1] [str2]" << std::endl, 1);

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	FileProcessor processor(filename, s1, s2);
	/*
	check ifstream, ofstream, rdbuf, find, erase, insert
	*/

}