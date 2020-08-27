/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02578.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:49:29 by kylee             #+#    #+#             */
/*   Updated: 2020/08/03 23:02:58 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int bingo[5][5];

int check(void)
{
	int i, j, temp, ret;

	i = 0;
	ret = 0;
	while (i < 5)
	{
		j = 0;
		temp = 0;
		while (j < 5)
		{
			temp += bingo[i][j];
			j++;
		}
		if (!temp)
			ret++;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		j = 0;
		temp = 0;
		while (j < 5)
		{
			temp += bingo[j][i];
			j++;
		}
		if (!temp)
			ret++;
		i++;
	}
	i = 0;
	temp = 0;
	while (i < 5)
	{
		temp += bingo[i][i];
		i++;
	}
	if (!temp)
		ret++;
	i = 0;
	temp = 0;
	while (i < 5)
	{
		temp += bingo[4 - i][i];
		i++;
	}
	if (!temp)
		ret++;
	return (ret);
}
int main(void)
{
	int	i;
	int	j;
	int	temp;
	int flag = 1;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			cin >> bingo[i][j];
			j++;
		}
		i++;
	}
	int t = 0;
	while (t < 25)
	{
		cin >> temp;
		i = 0;
		while (i < 5)
		{
			j = 0;
			while (j < 5)
			{
				if (bingo[i][j] == temp)
				{
					bingo[i][j] = 0;
				}
				j++;
			}
			i++;
		}
		if (check() >= 3&& flag)
		{
			cout << t + 1;
			flag = 0;
		}
		t++;
	}
}