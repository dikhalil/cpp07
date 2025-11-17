/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:43:07 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/17 17:09:36 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void to_upper(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main(void)
{
    std::string arr1[2] = {"diana", "naif"};
    int const arr2[5] = {1, 2, 3, 4, 5};
    float arr3[5] = {1.1, 2.1, 3.1, 4.1, 5.1};
    iter(arr1, 2, to_upper);
    iter(arr3, 5, increment<float>);
    iter(arr1, 2, print<std::string>);
    std::cout << "-----------\n";
    iter(arr2,  5, print<int>);
    std::cout << "-----------\n";
    iter(arr3,  5, print<float>);
    return (0);
}