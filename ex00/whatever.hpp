/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:00:42 by kangkim           #+#    #+#             */
/*   Updated: 2022/04/14 00:08:02 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H_
# define WHATEVER_H_

template<typename T>
void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
T min(T &a, T &b) {
  return (a < b) ? a : b;
}

template<typename T>
T max(T &a, T &b) {
  return (a > b) ? a : b;
}
#endif
