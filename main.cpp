#include <iostream>
#include <iomanip>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

//  prototypes so main knows these exist
void addStudent(node*& head);
void addRecursive(node*& current, node* newNode);

void printStudents(node* head);
void printRecursive(node* current);

void deleteStudent(node*& head);
void deleteRecursive(node*& current, int id);

void averageGpa(node* head);
void averageRecursive(node* current, float& sum, int& count);

int main() {
  node* head = NULL;
  addStudent(head);
  return 0:
}
// ADD STUDENT
void addStudent(node*& head) {
    // gather info from user
    char fname[15];
    char lname[30];
    int id;
    float gpa;

    cout << "Enter first name: ";
    cin >> fname;

    cout << "Enter last name: ";
    cin >> lname;

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter GPA: ";
    cin >> gpa;

    // make the student object
    student* s = new student(fname, lname, id, gpa);

    // yk wrap it in a node bc linked list moment
    node* newNode = new node(s);

    // yk recursion handles sorted insertion
    addRecursive(head, newNode);
}

// recursive sorted insert
void addRecursive(node*& current, node* newNode) {
    //empty list OR new node goes before current
    if (current == NULL ||
        newNode->getStudent()->getID() < current->getStudent()->getID()) {

        newNode->setNext(current);
        current = newNode;
        return;
    }

    // otherwise keep going
    addRecursive(current->getNext(), newNode);
}

// PRINT STUDENT


// DELETE STUDENT
// AVERAGE GPA
