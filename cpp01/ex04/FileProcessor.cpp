/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:24:35 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/13 18:49:46 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcessor.hpp"

FileProcessor::FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2)
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
}

FileProcessor::~FileProcessor()
{
}

std::string FileProcessor::replaceOccurrences(std::string content)
{
	if (_s1 == _s2)
		return content;
	size_t pos = 0;

	while((pos = content.find(_s1, pos)) != std::string::npos)
	{
		content.erase(pos, _s1.length());
		content.insert(pos, _s2);
		pos+= _s2.length();
	}
	return content;
}

int FileProcessor::processAndSaveFile()
{
	std::ifstream file(_filename);

	if (!file.is_open())
		return (std::cerr << "Error: Failed to open the file " << _filename << std::endl, 1);

	std::ostringstream content;
	content << file.rdbuf();
	std::string fileContent = content.str();
	file.close();

	if (fileContent.empty())
		return (std::cerr << "Error: The file " << _filename << " is empty" << std::endl, 1);

	std::cout << "Original content:\n" << fileContent << std::endl;

	std::string modifiedContent = replaceOccurrences(fileContent);

	std::ofstream newFile("modified_" + _filename);
	if (!newFile.is_open())
		return (std::cerr << "Error: Failed to create the new file " << "modified_" << _filename << std::endl, 1);

	newFile << modifiedContent;
	newFile.close();

	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Modified content:\n" << modifiedContent << std::endl;

	return 0;
}