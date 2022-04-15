/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:38:33 by kangkim           #+#    #+#             */
/*   Updated: 2022/04/15 12:47:35 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H_
# define ARRAY_H_

# include <exception>

template<typename T>
class Array {
public:
  class OutOfRangeException : public std::exception {
  public:
    const char *what(void) const throw() {
      return "error: out of range";
    }
  };

  Array(void) : elem_(NULL), size_(0) {}
  Array(unsigned int n) : elem_(new T[n]), size_(n) {}
  Array(const Array &origin)
    : elem_(new T[origin.size_]), size_(origin.size_)
  {
    for (std::size_t i = 0; i < size_; ++i)
      elem_[i] = origin.elem_[i];
  }

  ~Array(void) {
    if (elem_)
      delete[] elem_;
  }

  Array &operator=(const Array &rhs) {
    if (this == &rhs)
      return *this;
    if (size_ != 0)
      delete[] elem_;
    elem_ = new T[rhs.size_];
    size_ = rhs.size_;
    for (std::size_t i = 0; i < size_; ++i)
      elem_[i] = rhs.elem_[i];
    return *this;
  }

  T &operator[](std::size_t idx) {
    if (size_ <= idx)
      throw OutOfRangeException();
    return elem_[idx];
  }

  std::size_t size(void) const { return size_; }

private:
  T *elem_;
  std::size_t size_;
};

#endif
