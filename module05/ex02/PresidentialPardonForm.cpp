/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:57:44 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 11:51:06 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target_) : name("PresidentialPardonForm"), grade_to_execute(5), grade_to_signe(25)
{
	std::cout << "Constructor called for PresidentialPardonForm class\n";
	target = target_;
	signe = 0;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : name("PresidentialPardonForm"), grade_to_execute(5), grade_to_signe(25) {
	std::cout << "Copy constructor called for PresidentialPardonForm class\n";
	target = copy.target;
	signe = copy.signe;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	std::cout << "Copy assignement operator called for PresidentialPardonForm class\n";
	signe = copy.signe;
	target = copy.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called for PresidentialPardonForm class\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!signe)
		throw Form_not_signed();
	else if (executor.getGrade() <= grade_to_execute) {
		std::cout << target << " has been pardoned by Zaphod Beeblebrox!\n";
	}
	else
		throw Bureaucrat_grade_low(); 
}

std::string PresidentialPardonForm::getName(void) const
{
	return name;
}

int PresidentialPardonForm::getGrade_req_execute(void) const
{
	return grade_to_execute;
}

int PresidentialPardonForm::getGrade_req_signe(void) const
{
	return grade_to_signe;
}

bool PresidentialPardonForm::getSigne(void) const
{
	return signe;
}

void	PresidentialPardonForm::setSigne(bool i)
{
	signe = i;
}