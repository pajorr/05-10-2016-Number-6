#include <iostream>
//dylan
using namespace std;

//functions
void arrSelectSort(int*[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int); 

int main()
{
	  int NUM_DONATIONS = 15;   // Number of donations 
	 
	int donations[NUM_DONATIONS]; 
									 
	int *arrPtr[NUM_DONATIONS] = { 0, 0, 0, 0, 0,                               
	                               0, 0, 0, 0, 0,                                 
	                               0, 0, 0, 0, 0 };   
								   
	 int donate;                 
	 for (donate = 0; donate < NUM_DONATIONS; donate++)
	 {
	 cout << "Enter the donation"
	 << (donate + 1) << ": ";cin >> donations[donate];
	 }  							   								 


    for (int count = 0; count < NUM_DONATIONS; count++)            
      arrPtr[count] = &donations[count];
      
    arrSelectSort(arrPtr, NUM_DONATIONS); 
      
    cout << "The donations, sorted in ascending order are: \n";
	showArrPtr(arrPtr, NUM_DONATIONS);   
	
	cout << "The donations, in their original order are: \n";
	showArray(donations, NUM_DONATIONS);
	return 0;
	}   
	
	 void arrSelectSort(int *arr[], int size)
	 { int startScan, minIndex;
	 int *minElem;
	 
	 for (startScan = 0; startScan < (size - 1); startScan++)
	 {
	 minIndex = startScan;
	 minElem = arr[startScan];
	 for(int index = startScan + 1; index < size; index++)
	 {
	 if (*(arr[index]) < *minElem)
	 {
	 minElem = arr[index];
	 minIndex = index;
	 }
	 }
	 arr[minIndex] = arr[startScan];
	 arr[startScan] = minElem;
	 }
	 } 
	 
	  void showArray(const int arr[], int size)
	  {
	   for (int count = 0; count < size; count++)
	    cout << arr[count] << " ";
		cout << endl;
		}  
		
		 void showArrPtr(int *arr[], int size)
		 {
		 for (int count = 0; count < size; count++)
		 cout << *(arr[count]) << " ";
		 cout << endl;
		 }    

