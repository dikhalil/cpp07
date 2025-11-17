/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:10:14 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/17 17:58:25 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:   
    Array(void) : _array(NULL), _size(0) {}
    Array(unsigned int n) : _array(new T[n]), _size(n) {}
    Array(const Array &other) : _array(new T[other._size]), _size(other._size)
    {
        for (unsigned int i = 0; i < other._size; i++)
            _array[i] = other._array[i];
    }
    Array &operator=(const Array &other) 
    {
        if (this != &other)
        {
            delete[] _array;
            _size = other._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        return (*this);
    }
    T &operator[](unsigned int i)
    {
        if (i >= _size)
            throw std::out_of_range("Index Out of range");
        return (_array[i]);
    }
    const T &operator[](unsigned int i) const
    {
        if (i >= _size)
            throw std::out_of_range("Index Out of range");
        return (_array[i]);
    }
    ~Array(void)
    {
        delete[] _array;    
    }
    unsigned int size(void) const
    {
        return (_size);
    }
};

#endif