/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01339.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:58:33 by kylee             #+#    #+#             */
/*   Updated: 2020/08/04 14:36:10 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> list;
int	lists[30];

int power(int n, int k)
{
	int ret, i;

	ret = 1;
	i = 0;
	while (i < k)
	{
		ret *= n;
		i++;
	}
	return (ret);
}

int sort_list(int a, int b)
{
	return (a > b);
}

int main(void)
{
	int n, i, ret;
	string temp;
	cin >> n;
	i = 0;
	while (i < n)
	{
		cin >> temp;
		list.push_back(temp);
		i++;
	}
	i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < list.at(i).size())
		{
			lists[list.at(i).at(j) - 'A'] += power(10, list.at(i).size() - j - 1);
			j++;
		}
		i++;
	}
	sort(lists, lists + 26, sort_list);
	i = 0;
	ret = 0;
	while (i < 10)
	{
		//cout << lists[i] << "\n";
		ret += (9 - i) * lists[i];
		i++;
	}
	cout << ret;
}