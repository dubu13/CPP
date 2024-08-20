/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:23:47 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/20 12:26:22 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain &operator=(const Brain& other);

    private:
        std::string ideas[100];
};