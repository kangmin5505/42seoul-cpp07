/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:21:59 by kangkim           #+#    #+#             */
/*   Updated: 2022/04/14 10:34:03 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
  char arr1[26];
  int arr2[26];
  float arr3[26];

  std::cout << std::showpoint;
  for (int i = 0; i < 26; ++i) {
    arr1[i] = i + 'a';
    arr2[i] = i;
    arr3[i] = i;
  }
  ::iter(arr1, sizeof(arr1) / sizeof(*arr1), print_elem);
  ::iter(arr2, sizeof(arr2) / sizeof(*arr2), print_elem);
  ::iter(arr3, sizeof(arr3) / sizeof(*arr3), print_elem);
}
