/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01920.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 20:27:33 by kylee             #+#    #+#             */
/*   Updated: 2020/07/26 20:41:53 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>	list;
int main(void)
{
	int n, m, temp;

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	while (n--)
	{
		cin >> temp;
		list.push_back(temp);
	}
	sort(list.begin(), list.end());
	cin >> m;
	while (m--)
	{
		cin >> temp;
		int lo = 0, hi = list.size() - 1, mid;
		while (lo <= hi)
		{
			mid = (lo + hi) / 2;
			if (list.at(mid) == temp)
			{
				cout << "1\n";
				break ;
			}
			else if (list.at(mid) < temp)
			{
				lo = mid + 1;
			}
			else if (list.at(mid) > temp)
				hi = mid - 1;
		}
		if (list.at(mid) != temp)
			cout << "0\n";
	}

}