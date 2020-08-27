/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10757.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:56:10 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 20:13:04 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a, b, ret;
	int	i, carry;

	i = 0;
	cin >> a >> b;
	carry = 0;
	while (i < a.size() && i < b.size())
	{
		if (a.at(a.size() - i - 1) + b.at(b.size() - i - 1) - 2 * '0' + carry > 9)
		{
			ret.push_back(a.at(a.size() - i - 1) + b.at(b.size() - i - 1) - '0' + carry - 10);
		}
		else
		{
			ret.push_back(a.at(a.size() - i - 1) + b.at(b.size() - i - 1) - '0' + carry);
		}
		carry = (a.at(a.size() - i - 1) + b.at(b.size() - i - 1) - 2 * '0' + carry > 9) ? 1 : 0;
		i++;
	}
	while (i < a.size())
	{
		if (a.at(a.size() - i - 1) - '0' + carry > 9)
		{
			ret.push_back(a.at(a.size() - i - 1) + carry - 10);
		}
		else
		{
			ret.push_back(a.at(a.size() - i - 1) + carry);
		}
		carry = (a.at(a.size() - i - 1) - '0' + carry > 9) ? 1 : 0;
		i++;
	}
	while (i < b.size())
	{
		if (b.at(b.size() - i - 1) - '0' + carry > 9)
		{
			ret.push_back(b.at(b.size() - i - 1) + carry - 10);
		}
		else
		{
			ret.push_back(b.at(b.size() - i - 1) + carry);
		}
		carry = (b.at(b.size() - i - 1) - '0' + carry > 9) ? 1 : 0;
		i++;
	}
	if (carry == 1)
		ret.push_back(carry + '0');
	i = 0;
	while (i < ret.size())
	{
		cout << ret.at(ret.size() - i - 1);
		i++;
	}
}