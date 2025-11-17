/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:43:07 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/17 19:08:39 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    try
    {
        Array<int> num1;
        Array<int> num2(3);
        Array<int> num3;
        Array<std::string> str1(2);
        for (unsigned int i = 0; i < str1.size(); i++)
            str1[i] = "default";
        for (unsigned int i = 0; i < num2.size(); i++)
            num2[i] = i;
        num3 = num2;
        Array<std::string> str2(str1);
        std::cout << "---size of num1---\n" << num1.size();
        std::cout << "\n---element of num2---\n";
        for (unsigned int i = 0; i < num2.size(); i++)
            std::cout << num2[i] << "\n";
         std::cout << "---element of num3---\n";
        for (unsigned int i = 0; i < num3.size(); i++)
            std::cout << num3[i] << "\n";
        std::cout << "---element of str1---\n";
        for (unsigned int i = 0; i < str1.size(); i++)
            std::cout << str1[i] << "\n";
        str2[0] = "edited";
        std::cout << "---element of str2---\n";
        for (unsigned int i = 0; i < str2.size(); i++)
            std::cout << str2[i] << "\n";
        str2[4] = "error";
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}