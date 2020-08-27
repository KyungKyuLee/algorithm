/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02896.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:22:12 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 20:28:29 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<double> list;

int main(void)
{
	double a, b, c;
	double i, j, k;

	cin >> a >> b >> c >> i >> j >> k;
	list.push_back(a / i);
	list.push_back(b / j);
	list.push_back(c / k);
	sort(list.begin(), list.end());
	cout << fixed << a - i * list.at(0) << " ";
	cout << fixed << b - j * list.at(0) << " ";
	cout << fixed << c - k * list.at(0) << " ";
}