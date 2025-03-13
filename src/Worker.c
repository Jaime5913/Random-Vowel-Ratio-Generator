#include <stdio.h>
#include <stdlib.h>
#include "Worker.h"
//Takes in a lower and upper bound to return a random between the bounds given randomly.
int random_in_range(int lower_bound, int upper_bound){

	return ((rand() % (upper_bound - lower_bound)) + lower_bound); 
}
// Goes through the array and checks for uppercase vowels, then increments the vowel count if vowel is found.
int get_vowel_count (char *array, int arraySize){
	
	int number_of_vowels = 0;
	

	for(int  i = 0; i < arraySize; i++){

		switch(array[i]){

		case 'A':
			number_of_vowels++;
			break;
	
                case 'E':
                        number_of_vowels++;
                        break;

                case 'I':
                        number_of_vowels++;
                        break;

                case 'O':
                       number_of_vowels++;
                        break;


                case 'U':
                        number_of_vowels++;
                        break;

		default:
			break;

}
	
}

	return number_of_vowels;

}
float get_running_ratio(){

	int maxCountIteration = 0;
	int maxVowelCount = 0;
	float ratioAddition = 0.0;

	int randomIteration = random_in_range(50, 100);

	for(int i = 1; i <= randomIteration; i++){
 
		int randomVar = random_in_range(150, 200);
		char* charArray = (char*)malloc(randomVar * sizeof(char));		
		for (int j = 0; j < randomVar; j++){
			charArray[j] = random_in_range('A', 'Z' + 1);

		}

		int getVowelCount = get_vowel_count(charArray, randomVar);

		if(getVowelCount > maxVowelCount){
			maxVowelCount = getVowelCount;
			maxCountIteration = randomIteration;
			
		}

		float fRatio = (float) getVowelCount / (randomVar - getVowelCount);
		ratioAddition += fRatio;
		free(charArray);
	
	}

	float averageRatio = (float) ratioAddition / randomIteration;
	printf("[Worker]: Number of iterations is: %d\n", randomIteration);
	printf("[Worker]: Iteration with maximum vowel count is: %d\n ", maxCountIteration);
	
	return averageRatio;






}
