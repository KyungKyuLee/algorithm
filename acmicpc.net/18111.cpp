/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18111.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:58:14 by kylee             #+#    #+#             */
/*   Updated: 2020/07/29 14:11:25 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	list[501][501];
int main(void)
{
	int n, m, i, j, h, k, b, temp, min, min_temp, time;

	cin >> n >> m >> b;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			cin >> list[i][j];
			j++;
		}
		i++;
	}
	k = 0;
	min = 0x7fffffff;
	min_temp = 0;
	h = 256;
	while (k <= h)
	{
		i = 0;
		temp = 0;
		time = 0;
		while (i < n)
		{
			j = 0;
			while (j < m)
			{
				if (list[i][j] < k)
				{
					temp += 1 * (k - list[i][j]);
					time += 1 * (k - list[i][j]);
				}
				else if (list[i][j] > k)
				{
					temp -= 1 * (list[i][j] - k);
					time += 2 * (list[i][j] - k);
				}
				j++;
			}
			i++;
		}
		if (temp <= b && time <= min)
		{
			min = time;
			min_temp = k;
		}
		k++;
	}
	cout << min << " " << min_temp;
}