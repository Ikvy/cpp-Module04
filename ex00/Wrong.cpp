/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:16:28 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:33:48 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Wrong.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor message" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	*this = cpy;
	std::cout << "WrongAnimal copy constructor message" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor message" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	this->type = a.getType();
	return (*this);
}

void WrongAnimal::setType(const std::string& type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Weird wrong animal sound" << std::endl; 
}

WrongCat::WrongCat()
{
	this->setType("Wrong cat");
	std::cout << "WrongCat default constructor message" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor message" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	this->setType(cpy.getType());
	std::cout << "WrongCat copy constructor message" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
	this->setType(a.getType());
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "mIaOu" << std::endl; 
}

