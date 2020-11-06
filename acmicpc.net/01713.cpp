/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01713.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:40:26 by kylee             #+#    #+#             */
/*   Updated: 2020/10/21 21:18:03 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>

#define DEBUG 0

using namespace std;

int		list[105];
int		list2[105];

void	init(void)
{
	int	i;

	i = 0;
	while (i < 105)
		list2[i++] = 0x7fffffff;
}
int		main(void)
{
	int	n;
	int	k;
	int	i, j;
	int	cnt;
	int	in;
	int	min;

	cin >> n >> k;
	i = 0;
	cnt = 0;
	init();
	while (i < k)
	{
		cin >> in;
		if (cnt < n)
		{
			if (list[in] == 0)
			{
				list2[in] = i + 1;
				cnt++;
			}
			list[in]++;
		}
		else
		{
			if (list[in])
			{
				list[in]++;
			}
			else
			{
				j = 0;
				//list  : 추천 수
				//list2 : 추천 받은 가장 오래된 시기
				min = 0;
				while (j < 105)
				{
					if (list[min] < list[j])
						min = j;
					j++;
				}
				# if DEBUG
				cout << "min : " << min << "\n";
				# endif
				j = 0;
				while (j < 105)
				{
					// 추천 수가 1 이상인 경우
					if (list[j])
					{
						// 1. 추천수가 더 적다면 해당 학생을 기준으로 한다.
						if (list[j] < list[min])
							min = j;
						// 2. 추천수가 동일하다면 더 오래된 학생을 기준으로 한다.
						else if (list[j] == list[min] && list2[j] < list2[min])
							min = j;
					}
					j++;
				}
				list[min] = 0;
				list2[min] = 0;
				list2[in] = i + 1;
				list[in] = 1;
			}
		}
		# if DEBUG
		j = 0;
		while (j < 10)
			cout << list[j++] << " ";
		cout << "\n";
		# endif
		i++;
	}
	i = 0;
	while (i < 105)
	{
		if (list[i])
			cout << i << " ";
		i++;
	}
}