/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02146.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 15:32:58 by kylee             #+#    #+#             */
/*   Updated: 2020/08/12 16:30:42 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int list[105][105][2];

typedef struct s_data
{
	int i;
	int j;
	int index;
}			t_data;

vector<t_data> listp;

t_data data_init(int i, int j, int index)
{
	t_data ret;

	ret.i = i;
	ret.j = j;
	ret.index = index;
	return (ret);
}
void dfs(int n, int i, int j, int index)
{
	if (list[i][j][1])
		return ;
	list[i][j][1] = index;
	(i > 0) ? dfs(n, i - 1, j, index) : (void)0;
	(i < n - 1) ? dfs(n, i + 1, j, index) : (void)0;
	(j > 0) ? dfs(n, i, j - 1, index) : (void)0;
	(j < n - 1) ? dfs(n, i, j + 1, index) : (void)0;
}

int main(void)
{
	int n;
	cin >> n;

	int i = 0, j;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			cin >> list[i][j][0];
			j++;
		}
		i++;
	}
	int flag = 1;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (list[i][j][0] && list[i][j][1] == 0)
			{
				t_data data;
				data.i = i;
				data.j = j;
				data.index = flag;
				listp.push_back(data);
				dfs(n, i, j, flag++);
			}
			j++;
		}
		i++;
	}
	while (!listp.empty())
	{
		queue<t_data> q;
		t_data temp;
		temp.i = listp.back().i;
		temp.j = listp.back().j;
		temp.index = 0;
		q.push(temp);
		while (!q.empty())
		{
			if (q.back().i > 0)
			{
				if (list[q.back().i - 1][q.back().j][1] == listp.back().index)
				{
					q.push(data_init(q.back().i - 1, q.back().j, q.back().index))
				}
				else if (list[q.back().i - 1][q.back().j][1] > 0)
				{

				}
				else
				{
					
				}
			}
			if (q.back().i < n - 1)
			{

			}
			if (q.back().j > 0)
			{

			}
			if (q.back().j < n - 1)
			{

			}
			q.pop();
		}	
		listp.pop_back();
	}
}