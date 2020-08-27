/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01181.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 19:01:29 by kylee             #+#    #+#             */
/*   Updated: 2020/07/26 19:12:30 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> list;

int	sort_dic(string a, string b)
{
	if (a.size() != b.size())
		return (a.size() > b.size());
	int i = 0;
	while (i < a.size())
	{
		if (a.at(i) != b.at(i))
			return (a.at(i) > b.at(i));
		i++;
	}
	return (0);
}

int main(void)
{
	int n;
	string temp;

	cin >> n;
	while (n--)
	{
		cin >> temp;
		list.push_back(temp);
	}
	sort(list.begin(), list.end(), sort_dic);
	temp = "";
	while (!list.empty())
	{
		if (temp.compare(list.back()))
		{
			cout << list.back();
			cout << "\n";
		}
		temp = list.back();
		list.pop_back();
	}
}