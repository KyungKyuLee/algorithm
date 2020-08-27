/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02444.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 23:08:05 by kylee             #+#    #+#             */
/*   Updated: 2020/07/23 23:14:24 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;
int main(void)
{
	int n, i;
	cin >> n;
	i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < n - i - 1)
		{
			cout << " ";
			j++;
		}
		while (j < n + i)
		{
			cout << "*";
			j++;
		}
		cout << "\n";
		i++;
	}
	i = 0;
	while (i < n - 1)
	{
		int j = 0;
		while (j < i + 1)
		{
			cout << " ";
			j++;
		}
		while (j < 2 * n - i - 2)
		{
			cout << "*";
			j++;
		}
		cout << "\n";
		i++;
	}
}