//process.c


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <time.h>


void sleep(unsigned int mseconds)			
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

// used to sleep a random amount



int main(){
//process.c

while(true) //body of threads
{
	srand(static_cast<unsigned int>(time(0)));
    //Rand Seed
   
	
int x=((rand()%3)+1);
//sleep 1-3 seconds
//Keep your sleeps under a few seconds just to ensure the simulation doesn’t take
//unnecessarily long. 


int request_resources(int pid, int resources[]);
 //Request some resources less than (max – held)
 

sleep(x);	
//Sleep a random amount


void release_resources(int pid, int resources[]);
//Release subset of held resources



sleep(x);
//Sleep a random amount

}

system("pause");	
return 0;
}

