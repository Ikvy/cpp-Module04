/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:54:06 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:38:30 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp" 

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& cpy);
		~Dog();
		Dog& operator=(const Dog& a);
		void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *brain;
};

# endif
