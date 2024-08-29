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



	// SORTING GENERAL

};

