/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12015.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 21:36:17 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 22:09:11 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int> list;
int main(void)
{
	int n, input, i;

	i = 0;
	cin >> n;
	while (i < n)
	{
		cin >> input;
		if (list.empty())
			list.push_back(input);
		else 
		{
			int lo = 0, hi = list.size() - 1, mid;
			while (lo <= hi)
			{
				mid = (lo + hi) / 2;
 				if (list.at(mid) > input)
				{
					hi = mid - 1;
				}
				else if (list.at(mid) < input)
				{
					lo = mid + 1;
				}
				else
				{
					break ;
				}
			}
			if (lo == list.size())
				list.push_back(input);
			else if (list.at(mid) != input)
				list.at(lo) = input;
		}
		i++;
		/*
		int k = 0;
		while (k < list.size())
		{
			cout << list.at(k) << " ";
			k++;
		}
		cout << "\n";
		*/
	}
	cout << list.size();
}