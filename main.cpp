#include <iostream>
#include <iomanip>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

// yk prototypes so main knows these exist
void addStudent(node*& head);
void addRecursive(node*& current, node* newNode);

void printStudents(node* head);
void printRecursive(node* current);

void deleteStudent(node*& head);
void deleteRecursive(node*& current, int id);

void averageGpa(node* head);
void averageRecursive(node* current, float& sum, int& count);

 
