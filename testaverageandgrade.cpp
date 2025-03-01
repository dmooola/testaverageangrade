//test average and grade. Oladamola Ola-Buraimo. 03/19/24. This code will take user input for 5 grades and display the letter grade, and the final average grade at the end.
#include <iostream>
#include <iomanip>

double calcAverage(double scores[]);
std::string determineGrade(double score);

int main() {
    const int NUM_SCORES = 5;
    double scores[NUM_SCORES];

    std::cout << "Enter five test scores:\n";
    for (int i = 0; i < NUM_SCORES; ++i) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];

        std::cout << "Grade: " << determineGrade(scores[i]) << std::endl;
    }

    double average = calcAverage(scores);
    std::cout << "Average score: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}

double calcAverage(double scores[]) {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += scores[i];
    }
    return sum / 5.0;
}

std::string determineGrade(double score) {
    if (score >= 90)
        return "A";
    else if (score >= 80)
        return "B";
    else if (score >= 70)
        return "C";
    else if (score >= 60)
        return "D";
    else
        return "F";
}
