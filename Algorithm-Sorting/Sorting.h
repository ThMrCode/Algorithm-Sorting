#pragma once
#include "pch.h"
#include "Pointwise.h"

namespace Sorting
{

	// SORTING INTEGER

	vector<int> counting_sort(vector<int>& vect, int max);

	vector<int> counting_sort(vector<int>& vect, int max, int min);

	vector<long long> counting_sort(vector<long long>& vect, long long max);

	vector<long long> counting_sort(vector<long long>& vect, long long max, long long min);

	template<typename T>
	vector<pair<int, T>> counting_sort(vector<pair<int, T>>& vect, int max) {
		vector<int>vect_counting((max + 1), 0); int n = vect.size();
		vector<pair<int, T>> vect_return(n);
		for (int i = 0; i < n; i++)
		{
			vect_counting[vect[i].first]++;
		}
		Pointwise::add_Acumulate(vect_counting);
		for (int i = (n - 1); i >= 0; i--)
		{
			vect_counting[vect[i].first]--;
			vect_return[vect_counting[vect[i].first]] = vect[i];
		}
		return vect_return;
	}

	template<typename T>
	vector<pair<long long, T>> counting_sort(vector<pair<long long, T>>& vect, long long max) {
		vector<int>vect_counting((max + 1), 0); int n = vect.size();
		vector<pair<long long, T>> vect_return(n);
		for (int i = 0; i < n; i++)
		{
			vect_counting[vect[i].first]++;
		}
		Pointwise::add_Acumulate(vect_counting);
		for (int i = (n - 1); i >= 0; i--)
		{
			vect_counting[vect[i].first]--;
			vect_return[vect_counting[vect[i].first]] = vect[i];
		}
		return vect_return;
	}

	vector<int> radix_sort(vector<int>& vect, int sup10);

	vector<long long> radix_sort(vector<long long>& vect, int sup10);

	// SORTING GENERAL SOBRE REFERENCIA VECT

	template<typename T>
	void selection_sort(vector<T>& vect) {
		int n = vect.size(); int n_ = (n - 1);
		for (int i = 0; i < n_; i++)
		{
			int min = vect[i]; int pot = i;
			for (int j = (i + 1); j < n; j++)
			{
				if (vect[j] < min) {
					min = vect[j];
					pot = j;
				}
			}
			vect[pot] = vect[i];
			vect[i] = min;
		}
	}

	template<typename T>
	void bubble_sort(vector<T>& vect) {
		int n = vect.size();
		for (int i_ = 0; i_ < n; i_++)
		{
			for (int i = 0; i < (n - i_ - 1); i++)
			{
				if (vect[i] > vect[i + 1]) {
					T temp = vect[i];
					vect[i] = vect[i + 1];
					vect[i + 1] = temp;
				}
			}
		}
	}

	// SORTING GENERAL SOBRE REFERENCIA LIST

	template<typename T>
	list<T> insertion_sort(list<T>& lst) {
		list<T> lst_return;
		for (typename list<T>::iterator it = lst.begin(); it != lst.end(); ++it)
		{
			bool value_insert = true;
			for (typename list<T>::iterator it_r = lst_return.begin(); it_r != lst_return.end(); ++it_r)
			{
				if (*it < *it_r) {
					lst_return.insert(it_r, *it);
					value_insert = false;
					break;
				}
			}
			if (value_insert) lst_return.push_back(*it);
		}
		return lst_return;
	}

	template<typename T>
	list<T> quick_sort(list<T>& lst) {
		// Aun en proceso
		return list<T>();
	}

};

