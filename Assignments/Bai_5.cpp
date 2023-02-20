#include <iostream>
#include <iomanip>

using namespace std;

double calculateAverage(int* scores, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / size;
}

void sortScores(int* scores, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (scores[i] > scores[j]) {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "How many test scores do you want to enter? ";
    cin >> size;

    int* scores = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter test score #" << i+1 << ": ";
        cin >> scores[i];

        
        while (scores[i] < 0) {
            cout << "Invalid input! Please enter a non-negative number: ";
            cin >> scores[i];
        }
    }

   
    sortScores(scores, size);

    
    double average = calculateAverage(scores, size);

   
    cout << "Sorted scores:" << endl;
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl << "Average score: " << setprecision(2) << fixed << average << endl;

    
    delete[] scores;

    return 0;
}