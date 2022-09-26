/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:12:32 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/21 20:30:15 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Form* Intern::makeForm(std::string name_, std::string target)
{
    Form *robot = new RobotomyRequestForm(target);
    Form *shrub = new ShrubberyCreationForm(target);
    Form *presi = new PresidentialPardonForm(target);
    std::array<std::string, 3> types_name = {"robotomy request", "presidential pardon", "shrubbery creation"};
	std::array<Form*, 3> types = {robot, presi, shrub};
    int i;
    for (i = 0; i != 3; i++) {
        if (name_ == types_name[i])
            break;
    }
    for (int j = 0; j != 3; j++) {
        if (j != i)
            delete types[j];
    }
    if (i == 3) {
        throw Form::Form_not_found();
    }
    return types[i];
}