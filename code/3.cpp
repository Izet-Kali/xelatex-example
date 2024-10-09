#include <iostream>
#include <cmath>

using namespace std;


int arrayinit(int N){
	int array[N];
for(int i = 0; i<N; ++i){array[i] = rand()%100-50;}; // Заполнение массива r случайными числами

return(*array);
}


int arraysearchmax(int N, int *array){ //Поиск максимума
int max = array[0];
	for(int i = 0; i<N; ++i){
		if (array[i] > max)
			max = array[i];
	}
return(max);
}

int arraysearchmin(int N, int *array){ //Поиск максимума
int min = array[0];
	for(int i = 0; i<N; ++i){
		if (array[i] < min)
			min = array[i];
	}
return(min);
}


int main(){
int N;
int r[N];
int max, min;

cout << "N random numbers:" << endl;
cin >> N;


*r = arrayinit(N);

max = arraysearchmax(N, r);

min = arraysearchmin(N, r);

cout << "Array: [";
for(int i = 0; i<N; ++i){
	cout << r[i]<<" ";}
cout<< "]"<< endl;

cout << "Max: " << max << endl;
cout << "Min: " << min << endl;

free(r);
return(0);
}