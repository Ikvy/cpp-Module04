/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:13:13 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:36:13 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& cpy);
		~Brain();
		std::string ideas[100];
};

#endif
