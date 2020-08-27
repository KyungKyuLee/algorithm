/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03135.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 21:27:41 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 21:34:46 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> list;

int abs(int a)
{
	return ((a > 0) ? a : -a);
}
int main(void)
{
	int a, b;
	int n, i, temp;

	i = 0;
	cin >> a >> b >> n;
	list.push_back(abs(a - b));
	while (i < n)
	{
		cin >> temp;
		list.push_back(abs(temp - b));
		i++;
	}
	sort(list.begin(), list.end());
	if (list.at(0) == abs(a - b))
		cout << list.at(0);
	else
		cout << list.at(0) + 1;
}