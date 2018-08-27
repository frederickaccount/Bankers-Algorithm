//driver.c


#include <iostream>
#include <cstdlib>

#define MAX_THREADS 2
#include <windows.h>
 DWORD WINAPI request_resources (LPVOID);
 DWORD WINAPI release_resources(LPVOID);
 HANDLE hThreads [MAX_THREADS];
 DWORD id [MAX_THREADS];
 DWORD waiter;

using namespace std;

int main()
{


DWORD ThreadId;
  

  HANDLE ThreadHandle;    int processes;    ThreadHandle=CreateThread(NULL,0,request_resources,&processes,0,&ThreadId);
    
ThreadHandle=CreateThread(NULL,0,release_resources,&processes,0,&ThreadId);
	

waiter=WaitForMultipleObjects(MAX_THREADS,hThreads,TRUE,INFINITE);

  
  for(int i=0;i<MAX_THREADS;i++)
    

    CloseHandle(hThreads[i]);

	//In driver.c, process commandline arguments, create threads, and keep the simulation
	//running until there is only one process left.	

system("pause");	

return 0;
}	