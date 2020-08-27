/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16917.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:23:45 by kylee             #+#    #+#             */
/*   Updated: 2020/08/03 22:35:39 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c, x, y;
	int	ans;
	int	min;

	cin >> a >> b >> c >> x >> y;
	min = (x > y) ? y : x;
	ans = (2 * c < a + b) ? 2 * c * min : (a + b) * min;
	ans += (x - min) * a + b * (y - min) > 2 * c * (x + y - 2 * min) ? 2 * c * (x + y - 2 * min) : (x - min) * a + b * (y - min);
	cout << ans;
}