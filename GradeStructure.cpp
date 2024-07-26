//Header files 
#include <iostream>
#include <iomanip>
using namespace std;

struct GradeStructure {

        //Variables 
        double quizOne, quizTwo;
        double final, midterm;
        int student;
        double numericGrade;
        char letterGrade;

        //Constructor 
        GradeStructure(int student, int quizOne, int quizTwo, int midterm, int final) {

                this->final = final;
                this->midterm = midterm;
                this->quizOne = quizOne;
                this->quizTwo = quizTwo;
                this->student = student;
        }

        //Function calculates grade in structure 
        void calculateGrade() {

                //Calculate numeric score 
                numericGrade = (final * 0.5) + (midterm * 0.25) + (((quizOne + quizTwo) / 2) * 10) * 0.25;

                //Assign grade depending on numeric score 
                if (numericGrade >= 90) {
                        letterGrade = 'A';
                }
                else if (numericGrade >= 80 && numericGrade < 90) {
                        letterGrade = 'B';
                }
                else if (numericGrade >= 70 && numericGrade < 80) {
                        letterGrade = 'C';
                }
                else if (numericGrade >= 60 && numericGrade < 70) {
                        letterGrade = 'D';
                }
                else {
                        letterGrade = 'F';
                }

                //Print results
                cout << fixed << showpoint << setprecision(2);
                cout << "The record for student number : " << student << endl;
                cout << "The quiz grades are: " << quizOne << " " << quizTwo << endl;
                cout << "The midterm and exam grades are : " << midterm << " " << final << endl;
                cout << "The total numeric score is :  " << numericGrade << endl;
                cout << "and the letter grade assigned is " << letterGrade << endl;
        }
};

int main() {

        //Variables 
        int studentOne, studentTwo, studentThree;
        int studentOneQuizOne, studentOneQuizTwo;
        int studentTwoQuizOne, studentTwoQuizTwo;
        int studentThreeQuizOne, studentThreeQuizTwo;
        int studentOneMidterm, studentOneFinal;
        int studentTwoMidterm, studentTwoFinal;
        int studentThreeMidterm, studentThreeFinal;

        //Take user info for all three students sequentially 
        cout << "Enter the student number: ";
        cin >> studentOne;

        cout << "Enter two 10 point quizes: ";
        cin >> studentOneQuizOne >> studentOneQuizTwo;

        cout << "Enter the midterm and final exam grades. These are 100 point tests: ";;
        cin >> studentOneMidterm >> studentOneFinal;

        cout << endl;

        cout << "Enter the student number: ";
        cin >> studentTwo;

        cout << "Enter two 10 point quizes: ";
        cin >> studentTwoQuizOne >> studentTwoQuizTwo;

        cout << "Enter the midterm and final exam grades. These are 100 point tests: ";;
        cin >> studentTwoMidterm >> studentTwoFinal;

        cout << endl;

        cout << "Enter the student number: ";
        cin >> studentThree;

        cout << "Enter two 10 point quizes: ";
        cin >> studentThreeQuizOne >> studentThreeQuizTwo;

        cout << "Enter the midterm and final exam grades. These are 100 point tests: ";;
        cin >> studentThreeMidterm >> studentThreeFinal;

        cout << endl;

        //Create struct for first student 
        struct GradeStructure firstStudent = GradeStructure(studentOne, studentOneQuizOne, studentOneQuizTwo, studentOneMidterm, studentOneFinal);
        firstStudent.calculateGrade(); //Caclulate studnet number ones grade

        cout << endl;

        //Create struct for second student 
        struct GradeStructure secondStudent = GradeStructure(studentTwo, studentTwoQuizOne, studentTwoQuizTwo, studentTwoMidterm, studentTwoFinal);
        secondStudent.calculateGrade(); //Caclulate student number two grade

        cout << endl;

        //Create struct for third student 
        struct GradeStructure thirdStudent = GradeStructure(studentThree, studentThreeQuizOne, studentThreeQuizTwo, studentThreeMidterm, studentThreeFinal);
        thirdStudent.calculateGrade(); //Calculate student number three grade

        return 0;
}

