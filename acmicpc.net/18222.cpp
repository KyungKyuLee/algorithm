/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18222.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 23:56:06 by kylee             #+#    #+#             */
/*   Updated: 2020/08/04 00:22:06 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

long long power(long long n, long long k)
{
	long long ret;

	ret = 1;
	while (k)
	{
		ret *= n;
		k--;
	}
	return (ret);
}

long long log2(long long i)
{
	long long ret;

	ret = 0;
	while (i)
	{
		ret++;
		i >>= 1;
	}
	return (ret);
}

int main(void)
{
	long long k;
	int ret;
	ret = 0;
	cin >> k;

	while (k > 1)
	{
		k -= power(2, log2(k - 1) - 1);
		ret = !ret;
		//cout << k << "\n";
	}
	cout << ret;
}