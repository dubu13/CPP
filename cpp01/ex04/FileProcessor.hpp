/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileProcessor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:25:07 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/11 19:39:07 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEPROCESSOR_HPP
# define FILEPROCESSOR_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class FileProcessor
{
	public:
		FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2);
		~FileProcessor();
		int processAndSaveFile();

	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string replaceOccurrences(std::string content);
};

#endif