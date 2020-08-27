/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15829.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 19:23:04 by kylee             #+#    #+#             */
/*   Updated: 2020/07/26 20:25:12 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define R 31
#define M 1234567891

using namespace std;

long long	power_div(int r, int power)
{
	long long ret = 1;
	while (power)
	{
		ret = (ret * r) % M;
		power--;
	}
	return (ret);
}
int main(void)
{
	long long l, i = 0, sum = 0;
	string str;

	cin >> l >> str;
	while (i < str.size())
	{
		sum = (sum % M + (str.at(i) - 'a' + 1) * (power_div(R, i) % M)) % M;
		i++;
	}
	cout << sum;
}