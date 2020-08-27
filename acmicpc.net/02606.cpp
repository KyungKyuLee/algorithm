/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02606.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 23:04:34 by kylee             #+#    #+#             */
/*   Updated: 2020/08/03 23:19:00 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int output;
int	list[105][105];
int outputs[105];

void	dfs(int n, int max)
{
	int i;
	if (outputs[n] != 1)
		output++;
	while (i <= max)
	{
		if (list[n][i] == 1)
		{
			list[n][i] = 0;
			list[i][n] = 0;
			outputs[n] = 1;
			dfs(i, max);
		}
		i++;
	}

}

int main(void)
{
	int n, v;
	pair<int, int> temp;
	cin >> n >> v;
	while (v--)
	{
		cin >> temp.first >> temp.second;
		list[temp.first][temp.second] = 1;
		list[temp.second][temp.first] = 1;
	}
	outputs[1] = 1;
	dfs(1, n);
	cout << output;
}
