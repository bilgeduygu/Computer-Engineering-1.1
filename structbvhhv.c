// C++ program to demonstrate structure sorting in C++ 
#include <stdio.h> 
#include <stdbool.h>
struct Student 
{ 
	char name[10]; // Given 
	int math; // Marks in math (Given) 
	int phy; // Marks in Physics (Given) 
	int che; // Marks in Chemistry (Given) 
	int total; // Total marks (To be filled) 
	int rank; // Rank of student (To be filled) 
}student; 

// Function for comparing two students according 
// to given rules 
bool compareTwoStudents(struct Student a, struct Student b) 
{ 
	// If total marks are not same then 
	// returns true for higher total 
	if (a.total != b.total ) 
	{
		return a.total > b.total; 		
	}
	// If marks in Maths are not same then 
	// returns true for higher marks 
	if (a.math != b.math) 
	{
		return a.math > b.math; 		
	}
		return (a.phy > b.phy); 
} 

// Fills total marks and ranks of all Students 
int computeRanks(struct Student a, int n) 
{ 
int i;
	// To calculate total marks for all Students 
	for (i=0; i<n; i++) 
	{
		a.total = a.math + a.phy + a.che; 	
	}
	
	sort(a, a+5, compareTwoStudents); 

	// Assigning ranks after sorting 
	for (i=0; i<n; i++) 
	{
		a.rank = i+1; 		
	}
} 

// Driver code 
int main() 
{ 
	struct Student a;
	struct Student b;
	
	compareTwoStudents(a,b);

	int n = 5; 

	// array of structure objects 

	// Details of Student 1 
	a.math = 80 ; 
	a.phy = 95 ; 
	a.che = 85 ; 

	computeRanks(a, n); 


	//Column names for displaying data 
	printf("Rank \tName\tMaths\tPhysics\tChemistry \t total");
	printf("\n");
	
		printf("%d\t",a.math);
		printf("%d\t",a.phy);
		printf("%d\t",a.che);
		printf("%d\t",a.total);
		printf("\n");
		// Details of Student 2 
	// Display details of Students 
	return 0; 
} 

