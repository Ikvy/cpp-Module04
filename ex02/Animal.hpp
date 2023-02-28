/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:14:15 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 10:13:47 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
	public:
		Animal& operator=(const Animal& a);
		virtual ~Animal();
		std::string getType() const;
		void setType(const std::string& type);
		virtual void makeSound() const;
	private:
		std::string type;
	protected:
		Animal();
		Animal(const Animal& cpy);
};


#endif
