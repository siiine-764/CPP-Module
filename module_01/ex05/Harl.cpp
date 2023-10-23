/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:40:58 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:43:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std:: string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    //An array of pointers to member functions (pck) is initialized.
    void    (Harl::*pck[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while(i < 4)
    {
        if (lvls[i] == level)
        {
            (this->*pck[i])();
            break;
        }
        i++;
    }
}

Harl::Harl()
{
}
Harl::~Harl()
{
}
