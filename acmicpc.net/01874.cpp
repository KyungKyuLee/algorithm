/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01874.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 10:49:52 by kylee             #+#    #+#             */
/*   Updated: 2020/08/09 23:33:46 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> list;
vector<int> pool;
queue<char> output;
queue<int> input;

int main(void)
{
	int n, in, temp, i, flag;

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	i = 0;
	//flag = 0;
	while (i < n)
	{
		pool.push_back(n - i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		cin >> in;
		input.push(in);
		i++;
	}
	while (n--)
	{
		in = input.front();
		input.pop();
		while (!pool.empty() && pool.back() <= in)
		{
			list.push_back(pool.back());
			pool.pop_back();
			output.push('+');
		}
		if (!list.empty() && list.back() == in)
		{
			list.pop_back();
			output.push('-');
		}
		else
		{
			flag = 2;
			break ;
		}
	}
	if (flag == 2)
	{
		cout << "NO\n";
		return (0);
	}
	else
	{
		while (!output.empty())
		{
			cout << output.front() << "\n";
			output.pop();
		}
	}
}