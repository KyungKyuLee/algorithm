/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10994.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 21:00:38 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 21:18:21 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int n, i;

	cin >> n;
	i = 0;
	while (i < 2 * n - 1)
	{
		if (i % 2 == 0)
		{
			int j = 0;
			while (j < 4 * (n - 1) + 1)
			{
				if (j >= i && j <= 4 * (n - 1) - i)
					cout << "*";
				else if ((j < i || j > 4 * (n - 1) - i) && j % 2 == 0)
					cout << "*";
				else
					cout << " ";	
				j++;
			}
		}
		else
		{
			int j = 0;
			while (j < 4 * (n - 1) + 1)
			{
				if ((j < i || j > 4 * (n - 1) - i) && j % 2 == 0)
					cout << "*";
				else
					cout << " ";	
				j++;
			}
		}
		cout << "\n";
		i++;
	}
	i = 2 * n - 2;
	while (i >= 0)
	{
		if (i % 2 != 0)
		{
			int j = 0;
			while (j < 4 * (n - 1) + 1)
			{
				if (j >= i && j <= 4 * (n - 1) - i)
					cout << "*";
				else if ((j < i || j > 4 * (n - 1) - i) && j % 2 == 0)
					cout << "*";
				else
					cout << " ";	
				j++;
			}
		}
		else
		{
			int j = 0;
			while (j < 4 * (n - 1) + 1)
			{
				if ((j < i || j > 4 * (n - 1) - i) && j % 2 == 0)
					cout << "*";
				else
					cout << " ";	
				j++;
			}
		}
		cout << "\n";
		i--;
	}
}