/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:00:43 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:35:08 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Cat default constructor message" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	this->setType(cpy.getType());
	std::cout << "Cat copy constructor message" << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
	this->setType(a.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor message" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl; 
}
