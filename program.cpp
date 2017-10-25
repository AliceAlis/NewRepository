#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findmin(){
	int N=10;
	int t[N]={};
	int max=t[0], min=t[0];
	
		srand(time(0));
	
	for(int i=0; i<N; ++i)
	 t[i]=rand()%10+1;
	
	for(int i=0; i<N; ++i){
	 if(min>t[i]) min=t[i];
	 if(max<t[i]) max=t[i];
	}

	cout << "Największy element to " << max << " ."<< endl;
	cout << "Najmniejszy element to " << min << " ." << endl;
  return min;	
}



int main(){
	
	findmin();
	return(0);
}
