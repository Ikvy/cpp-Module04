/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:35:19 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:35:43 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Copy brain constructor called" << std::endl;
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << "Default brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& cpy)
{
	int i;
	for (i = 0; i != 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return(*this);
}
