/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18119.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:56:55 by kylee             #+#    #+#             */
/*   Updated: 2020/08/06 22:09:55 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

#define ADD(a, n) (n |= (1 << (a - 'a')))
#define SUB(a, n) (n &= ~(1 << (a - 'a')))

using namespace std;

vector<int> list;
int main(void)
{
	int n, m, i, temp;
	string input;
	cin >> n >> m;
	while (n--)
	{
		cin >> input;
		i = 0;
		temp = 0;
		while (i < input.size())
		{
			ADD(input.at(i), temp);
			i++;
		}
		list.push_back(temp);
	}
	int in1, ret;
	string in2;
	temp = 0x7fffffff;
	while (m--)
	{
		cin >> in1 >> in2;
		if (in1 == 1)
			SUB(in2.at(0), temp);
		else
			ADD(in2.at(0), temp);
		i = 0;
		ret = 0;
		while (i < list.size())
		{
			if ((temp & list.at(i)) == list.at(i))
				ret++;
			i++;
		}
		cout << ret << "\n";
	}
}