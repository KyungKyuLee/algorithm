/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02443.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 23:03:15 by kylee             #+#    #+#             */
/*   Updated: 2020/07/23 23:07:39 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int n, n_origin;
	cin >> n;
	n_origin = n;
	while (n)
	{
		int i = 0;
		while (i < n_origin - n)
		{
			cout << " ";
			i++;
		}
		i = 0;
		while (i < 2 * n - 1)
		{
			cout << "*";
			i++;
		}
		cout << "\n";
		n--;
	}
}