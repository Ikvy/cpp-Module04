/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:13:34 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:34:13 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
# define WRONG_HPP

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal& operator=(const WrongAnimal& a);
		virtual ~WrongAnimal();
		std::string getType() const;
		void setType(const std::string& type);
		void makeSound() const;
	private:
		std::string type;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& cpy);
		WrongCat& operator=(const WrongCat& a);
		~WrongCat();
		void makeSound() const;
};


#endif
