/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:14:33 by kangkim           #+#    #+#             */
/*   Updated: 2022/04/14 10:30:28 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H_
# define ITER_H_

# include <cstdio>
# include <iostream>

template<typename T>
void print_elem(T &elem) {
  std::cout << elem << " "; 
}

template<typename T>
void iter(T *arr, std::size_t len, void (*func)(T &elem)) {
  for (std::size_t i = 0; i < len; ++i) {
    func(arr[i]);
  }
  std::cout << std::endl;
}

#endif
