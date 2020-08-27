/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04706.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:15:21 by kylee             #+#    #+#             */
/*   Updated: 2020/07/28 20:21:45 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	double ta, tb;

	cin >> ta >> tb;
	while (ta != 0 || tb != 0)
	{
		cout.precision(3);
		cout << fixed << sqrt(1 - (tb * tb) / (ta * ta)) << "\n";
		cin >> ta >> tb;
	}
}