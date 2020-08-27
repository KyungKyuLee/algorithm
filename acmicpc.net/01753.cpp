/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01753.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 20:26:52 by kylee             #+#    #+#             */
/*   Updated: 2020/08/09 09:07:34 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<pair<int, int> > list[20005];
priority_queue<pair<int, int> > pq;
int		l[20005][2];
int main(void)
{
	int v, e, k, a, b, c;
	cin >> v >> e >> k;
	int i = 0;
	while (i < e)
	{
		cin >> a >> b >> c;
		list[a].push_back(pair<int, int>(b, c));
		i++;
	}
	i = 1;
	while (i <= v)
	{
		l[i][0] = 0x7fffffff;
		i++;
	}
	l[k][0] = 0;
	pq.push(pair<int, int>(0, k));
	while (!pq.empty())
	{
		int w = -pq.top().first;
		int s = pq.top().second;
		pq.pop();
		i = 0;
		while (i < list[s].size())
		{
			if (l[list[s].at(i).first][0] > l[s][0] + list[s].at(i).second)
			{
				l[list[s].at(i).first][0] = l[s][0] + list[s].at(i).second;
				pq.push(pair<int, int>(-l[list[s].at(i).first][0], list[s].at(i).first));
			}
			i++;
		}
	}
	i = 1;
	while (i <= v)
	{
		if (l[i][0] == 0x7fffffff)
			cout << "INF\n";
		else
			cout << l[i][0] << "\n";
		i++;
	}
}