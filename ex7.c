/* ***************************************************************************************** */
/*                                                                                           */
/*                                                                                           */
/*   ex7.c                                                           __    _            __   */
/*                                                       _________ _/ /_  (_)______  __/ /   */
/*   By: rahisulhaque <rahisul@icloud.com>              / ___/ __ `/ __ \/ / ___/ / / / /    */
/*                                                     / /  / /_/ / / / / (__  ) /_/ / /     */
/*   Created: 2019/03/05 12:33:41 by rahisulhaque     /_/   \__,_/_/ /_/_/____/___,_/_/      */
/*   Updated: 2019/03/05 22:30:45 by rahisulhaque                                            */
/*                                                                                           */
/* ***************************************************************************************** */

#include <stdio.h>

int 		main()
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 5678.1234;
	char initial = 'R';
	char first_name[] = "Rahi";
	char last_name[] = "Haq";
	
	printf("You are %d miles away from.\n", distance);
	printf("You have %f levels of knowledge about react.\n", power);
	printf("You have %f levels of super power.\n", super_power);
	printf("My initial of first name is %c.\n", initial);
	printf("My fisrt name is %s.\n", first_name);
	printf("My last name is %s.\n",  last_name);
	printf("My whole name is %s %s or %c. %s.\n", first_name, last_name, initial, last_name);
 	
	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You have %d  bugs at the imaginary rate of %f.\n", bugs, bug_rate);
	
	long universe_of_defect = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", universe_of_defect);

		
	
	return(0);
}
