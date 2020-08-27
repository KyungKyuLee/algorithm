/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07597.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 21:21:31 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 21:26:04 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string input;
	int a, b, i;
	int at, bt;

	cin >> input;
	while (input.compare("#"))
	{
		a = 0;
		b = 0;
		i = 0;
		at = 0;
		bt = 0;
		while (i < input.size())
		{
			if (input.at(i) == 'A')
				at++;
			else if (input.at(i) == 'B')
				bt++;
			if (at >= 4 && at - bt >= 2)
			{
				at = 0;
				bt = 0;
				a++;
			}
			else if (bt >= 4 && bt - at >= 2)
			{
				at = 0;
				bt = 0;
				b++;
			}
			i++;
		}
		cout << "A " << a << " B " << b << "\n";
		cin >> input;
	}
}