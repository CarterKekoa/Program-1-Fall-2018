// filename: Program1
// Authors: Carter Mooring & Tarik Alauddin
// Date: Sept. 5th, 2018
// description: TODO

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 10;

void readQuizScores(ifstream& inputFile, int myQuizzes[], int& numberOfQuizzes);
void readProgrammingScores(ifstream& infile, int myProgrammingScores[], int& numberOfProgrammingScores);
void readExamScores(ifstream& infile, int myExamScores[], int& numberOfExamScores);
double findQuizAverage(int myQuizzes[], int numberOfQuizzes);
double findProgrammingAverage(int myProgrammingScores[], int numberOfProgrammingScores);
double findExamAverage(int myExamScores[], int numberOfExamScores);
double findCourseAverage(double totalOfQuizAverage, double totalOfProgrammingAverage, double totalOfExamAverage);
void detailedReport();

main()
{
  int myQuizzes[MAX_SIZE];
  int myProgrammingScores[MAX_SIZE];
  int myExamScores[MAX_SIZE];
  int numberOfQuizzes;
  int numberOfProgrammingScores;
  int numberOfExamScores;
  double totalOfQuizAverage;
  double totalOfProgrammingAverage;
  double totalOfExamAverage;
  double totalCourseAverage;

  ifstream inputFile;
  inputFile.open("scores.dat");

  readQuizScores(inputFile, myQuizzes, numberOfQuizzes);
  readProgrammingScores(inputFile, myProgrammingScores, numberOfProgrammingScores);
  readExamScores(inputFile, myExamScores, numberOfExamScores);
  totalOfQuizAverage = findQuizAverage(myQuizzes, numberOfQuizzes);
  totalOfProgrammingAverage = findProgrammingAverage(myProgrammingScores, numberOfProgrammingScores);
  totalOfExamAverage = findExamAverage(myExamScores, numberOfExamScores);
  findCourseAverage(totalOfQuizAverage, totalOfProgrammingAverage, totalOfExamAverage);
  totalCourseAverage = findCourseAverage(totalOfQuizAverage, totalOfProgrammingAverage, totalOfExamAverage);
  //detailedReport;

  cout << totalCourseAverage;

  return 0;
}

void readQuizScores(ifstream& inputFile, int myQuizzes[], int& numberOfQuizzes)
{
  inputFile >> numberOfQuizzes;

  //TODO put comments in different function

  //cout << "Number Of Quizzes: " << numberOfQuizzes << endl;

  for (int k = 0; k < numberOfQuizzes; k++)
	{
		inputFile >> myQuizzes[k];
    //cout << "Quiz Number: " << k << "score: " << myQuizzes[k] << endl;
	}

  inputFile.ignore();
}

void readProgrammingScores(ifstream& inputFile, int myProgrammingScores[], int& numberOfProgrammingScores)
{
  inputFile >> numberOfProgrammingScores;

  //TODO put comments in different function

  //cout << "Number Of Programs: " << numberOfProgrammingScores << endl;

  for (int k = 0; k < numberOfProgrammingScores; k++)
  {
    inputFile >> myProgrammingScores[k];
    //cout << "Program Number: " << k << "score: " << myProgrammingScores[k] << endl;
  }

  inputFile.ignore();
}

void readExamScores(ifstream& inputFile, int myExamScores[], int& numberOfExamScores)
{
  inputFile >> numberOfExamScores;

  //TODO put comments in different function

  //cout << "Number Of Exams: " << numberOfExamScores << endl;

  for (int k = 0; k < numberOfExamScores; k++)
  {
    inputFile >> myExamScores[k];
    //cout << "Exam Number: " << k << "score: " << myExamScores[k] << endl;
  }

  inputFile.ignore();
}

double findQuizAverage(int myQuizzes[], int numberOfQuizzes)
{
  double totalOfQuizAverage = 0;

  for (int k = 0; k < numberOfQuizzes; k++)
  {
    totalOfQuizAverage += myQuizzes[k];

    //TODO put in output function
    //cout << endl << total << endl;
  }
  return totalOfQuizAverage;
}

double findProgrammingAverage(int myProgrammingScores[], int numberOfProgrammingScores)
{
  double totalOfProgrammingAverage = 0;

  for (int k = 0; k < numberOfProgrammingScores; k++)
  {
    totalOfProgrammingAverage += myProgrammingScores[k];

    //TODO put in output function
    //cout << endl << total << endl;
  }
  return totalOfProgrammingAverage;
}

double findExamAverage(int myExamScores[], int numberOfExamScores)
{
  double totalOfExamAverage = 0;

  for (int k = 0; k < numberOfExamScores; k++)
  {
    totalOfExamAverage += myExamScores[k];

    //TODO put in output function
    //cout << endl << total << endl;
  }
  return totalOfExamAverage;
}

double findCourseAverage(double totalOfQuizAverage, double totalOfProgrammingAverage, double totalOfExamAverage)
{
  double totalCourseAverage;
  double quizPercentage;
  double programmingPercentage;
  double examPercentage;
  double quizPercentageAverage;
  double programmingPercentageAverage;
  double examPercentageAverage;

  quizPercentage = 100.0 / 800.0;
  quizPercentageAverage = (totalOfQuizAverage / 40.0) * quizPercentage;
  //cout << totalOfQuizAverage << endl;
  //cout << quizPercentage << endl;
  //cout << quizPercentageAverage << endl;
  programmingPercentage = 300.0 / 800.0;
  programmingPercentageAverage = (totalOfProgrammingAverage / 120.0) * programmingPercentage;
  //cout << totalOfProgrammingAverage << endl << programmingPercentage << endl;
  //cout << programmingPercentageAverage << endl;
  examPercentage = 400.0 / 800.0;
  examPercentageAverage = (totalOfExamAverage / 200) * examPercentage;
  //cout << "1 " << totalOfExamAverage << endl << "2 " << examPercentage << endl << "3 " << examPercentageAverage << endl;
  totalCourseAverage = quizPercentageAverage + programmingPercentageAverage + examPercentageAverage;
  //TODO Find out why perecent is coming out wrong
  return totalCourseAverage * 100;
}

  void detailedReport()
  {

  }
