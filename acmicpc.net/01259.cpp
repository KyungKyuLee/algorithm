/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01259.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 19:13:14 by kylee             #+#    #+#             */
/*   Updated: 2020/07/26 19:18:13 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string i;
	cin >> i;
	while (!(i.size() == 1 && i.at(0) == '0'))
	{
		int j = 0, k = i.size() - 1;
		while (j < k)
		{
			if (i.at(j) != i.at(k))
			{
				cout << "no\n";
				break ;
			}
			j++;
			k--;
		}
		if (j >= k)
		{
			cout << "yes\n";
		}
		cin >> i;
	}
	return (0);
}