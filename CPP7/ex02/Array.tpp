/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 07:24:22 by tkong             #+#    #+#             */
/*   Updated: 2023/03/08 21:00:17 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
Array<T>::Array() : ptr(), n() {}

template <class T>
Array<T>::Array(const Array& rhs) { *this = rhs; }

template <class T>
Array<T>::Array(size_t n) : ptr(new T[n]), n(n) {
	memset(this->ptr, '\0', sizeof(T) * this->n);
}

template <class T>
Array<T>::~Array() {
	if (ptr) {
		delete[] this->ptr;
	}
}

template <class T>
Array<T>& Array<T>::operator=(const Array& rhs) {
	if (this == &rhs) {
		return *this;
	}
	this->ptr = new T[rhs.n];
	this->n = rhs.n;
	memcpy(this->ptr, rhs.ptr, sizeof(T) * rhs.n);
	return *this;
}

template <class T>
T& Array<T>::operator[](size_t idx) {
	if (idx >= this->n) {
		throw std::invalid_argument("Index out of range");
	}
	return this->ptr[idx];
}

template <class T>
size_t Array<T>::size() const { return this->n; }
