/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18353.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 23:33:37 by kylee             #+#    #+#             */
/*   Updated: 2020/08/03 23:50:11 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int> list;

int main(void)
{
	int n, i = 0, temp;
	cin >> n;
	while (i < n)
	{
		cin >> temp;
		if (list.size() == 0)
			list.push_back(temp);
		else
		{
			int lo = 0, hi = list.size() - 1, mid;
			while (lo <= hi)
			{
				mid = (lo + hi) / 2;
				if (list.at(mid) > temp)
				{
					lo = mid + 1;
				}
				else
				{
					hi = mid - 1;
				}
			}
			if (lo >= list.size())
			{
				list.push_back(temp);
			}
			else
			{
				list.at(lo) = temp;
			}
		}
		i++;
	}
	cout << n - list.size();
}
