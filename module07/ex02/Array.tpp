#include "Array.hpp"

template<class T>
Array<T>::Array(){
	this-> m_data = NULL;
	this-> m_size = 0;
}

template<class T>
Array<T>::Array(unsigned int size){
	this->m_data = new T(size);
	this->m_size = size;
}

template<class T>
Array<T>::Array(const Array& other){
	this->m_size = other.m_size;
	this->m_data = new T[this->m_size];
	for (unsigned int i=0; i< this->m_size; i++){
		this->m_data[i] = other.m_data[i];
	}
}

template<class T>
Array<T>& Array<T>::operator=(const Array& other){
	if (this != &other){
		this->m_size = other.m_size;
		T* newData = new T[this->m_size];
		for (unsigned int i=0; i < this->m_size; i++){
			newData[i] = other.m_data[i];
		}
		delete []m_data;
		this->m_data = newData;
	}
	return (*this);
}

template<class T>
Array<T>::~Array(){

}

template<class T>
T& Array<T>::operator[](unsigned int index){
	if (this->m_size > index)
		return m_data[index];
	else{
		std::ostringstream oss;
		oss << "index max : " << this->m_size << " current : " << index << " is out";
		throw std::out_of_range(oss.str()); // 문자열로 변환하여 예외를 던짐
	}
}

template<class T>
unsigned int Array<T>::size() const {
	return(this->m_size);
}