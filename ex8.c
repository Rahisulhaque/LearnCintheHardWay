/* ***************************************************************************************** */
/*                                                                                           */
/*                                                                                           */
/*   ex8.c                                                           __    _            __   */
/*                                                       _________ _/ /_  (_)______  __/ /   */
/*   By: rahisulhaque <rahisul@icloud.com>              / ___/ __ `/ __ \/ / ___/ / / / /    */
/*                                                     / /  / /_/ / / / / (__  ) /_/ / /     */
/*   Created: 2019/03/05 14:52:44 by rahisulhaque     /_/   \__,_/_/ /_/_/____/___,_/_/      */
/*   Updated: 2019/03/05 15:09:19 by rahisulhaque                                            */
/*                                                                                           */
/* ***************************************************************************************** */

#include <stdio.h>

int		main(int argc, char *argv[]){

	int i;
	
	i = 0;
	if(argc == 1){
		printf("Please try with an argument!\n");
	}else if(argc > 1 && argc < 4){
		printf("Here is your arguments: \n");
		
		for(i = 1; i < argc; i++){
			printf("\t %s\n", argv[i]);
		}
		printf("\n");
	}else{
		printf("You have too many arguments.\n");
	}

	return(0);
}
