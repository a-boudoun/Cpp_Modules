#pragma once

#include<iostream>


template <typename T>
void	iter(T *arr, size_t length, void (*func)(T const &))
{
	for(size_t i = 0; i < length; i++){
		func(arr[i]);
	}
}

template <typename T>
void	iter(T *arr, size_t length, void (*func)(T &))
{
	for(size_t i = 0; i < length; i++){
		func(arr[i]);
	}
}
