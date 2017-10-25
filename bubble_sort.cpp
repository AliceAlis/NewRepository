#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sort_elements(){
  int N=10, numbers[N]={}, x ;
  int i;
  
  srand(time(0));
	for( i=0; i<N; ++i){
	 numbers[i]=rand()%10+1;
	    cout << numbers[i];
    }

    
  for(i=0; i<N-1; ++i){
	if(numbers[i]>numbers[i+1]){
	  x = numbers[i];
	  numbers[i] = numbers[i+1];
	  numbers[i+1] = x;
	  } 
	  cout << " "<< numbers[i];
	}
	
		
	
	return(0);
}
int main(){
	sort_elements();
	}
