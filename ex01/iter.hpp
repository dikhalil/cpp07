/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:13:21 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/17 19:18:14 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>


template <typename T>
void iter(T *array, size_t const size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>
void iter(const T *array, size_t const size, void (*f)(const T &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

#endif