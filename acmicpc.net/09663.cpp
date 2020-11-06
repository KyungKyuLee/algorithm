/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09663.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:28:56 by kylee             #+#    #+#             */
/*   Updated: 2020/10/21 16:50:41 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define ABS(a) ((a > 0) ? a : -a)
#define DEBUG 0
using namespace std;

int		list[20];
int		ans;

int		abs(int n)
{
	return (n > 0 ? n : -n);
}

int		rec(int k, int n)
{
	int	i;
	int	j;
	int	flag;

	if (k == n)
	{
		i = 0;
		# if DEBUG
		while (i < n)
			cout << list[i++] << " ";
		cout << "\n";
		# endif
		ans++;
		return (0);
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		flag = 0;
		while (j < k)
		{
			if (list[j] == i || abs(list[j] - i) == abs(k - j))
			{
				flag++;
				break ;
				/*
				list[j] = i;
				rec(k + 1, n);
				*/
			}
			# if DEBUG
			cout << "test : " <<  abs(list[j] - i) << " " << abs(k - j) << "\n";
			# endif
			j++;
		}
		if (flag == 0)
		{
			list[k] = i;
			rec(k + 1, n);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	int	n;

	cin >> n;
	rec(0, n);
	cout << ans;
}