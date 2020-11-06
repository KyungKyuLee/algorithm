/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graduation.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:20:47 by kylee             #+#    #+#             */
/*   Updated: 2020/11/02 20:55:14 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	list[15];
int	list2[15];

int main(void)
{
	int c;
	int	n, k, m, l;
	int	i, j, cnt, in;
	int	now;
	int	sum;
	int	flag;

	cin >> c;
	while (c--)
	{
		sum = 0;
		cin >> n, k, m, l;
		i = 0;
		while (i < n)
		{
			cin >> cnt;
			j = 0;
			while (j < cnt)
			{
				cin >> in;
				list[j] |= (1 << in);
				j++;
			}
			i++;
		}
		now = 0;
		i = 0;
		while (i < m)
		{
			cin >> cnt;
			j = 0;
			flag = 0;
			while (j < cnt)
			{
				cin >> in;
				if ((list[in] & now) == list[in])
				{
					now |= (1 << in);
					flag++;
				}
				j++;
			}
			if (flag)
			{
				sum++;
				flag = 0;
			}
			i++;
		}
	}
}