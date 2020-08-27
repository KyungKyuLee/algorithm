/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02108.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 20:43:11 by kylee             #+#    #+#             */
/*   Updated: 2020/07/26 22:12:29 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

vector<int> list;
vector<int> arrs;
int	arr[8001];
int main(void)
{
	int	n, temp, i = 0, max;
	long long sum = 0;
	
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	while (i < n)
	{
		cin >> temp;
		sum += temp;
		arr[temp + 4000]++;
		list.push_back(temp);
		i++;
	}
	sort(list.begin(), list.end());
	if (round((double)sum / n) == 0)
		cout << "0\n";
	else
		cout << round((double)sum / n) << "\n";
	cout << list.at(n / 2) << "\n";
	max = 0;
	i = 0;
	while (i < 8001)
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	i = 0;
	while (i < 8001)
	{
		if (max == arr[i])
			arrs.push_back(i - 4000);
		i++;
	}
	cout << ((arrs.size() == 1) ? arrs.at(0) : arrs.at(1)) << "\n";
	cout << list.at(n - 1) - list.at(0) << "\n";

}