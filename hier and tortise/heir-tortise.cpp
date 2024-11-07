#include <iostream>
using namespace std;

int main() {
    int choice; // Variable to store user's choice
    int raceProgress = 0; // Variable to track race progress (0 - not started, 1 - hare ahead, 2 - tortoise ahead, 3 - race ended)

    // Introduction to the story
    cout << "Welcome to the story of The Tortoise and The Hare!" << endl;
    cout << "The hare is very confident and fast, while the tortoise is slow but steady." << endl;
    cout << "You will decide who to be and make choices that will determine the outcome of the race." << endl;

    // Choose to be the hare or the tortoise
    cout << "Who do you want to be?" << endl;
    cout << "1. The Hare" << endl;
    cout << "2. The Tortoise" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Loop to ensure valid input
    while (choice != 1 && choice != 2) {
        cout << "Invalid choice! Please enter 1 for Hare or 2 for Tortoise: ";
        cin >> choice;
    }

    if (choice == 1) {
        // If the user is the hare, they will start the race
        raceProgress = 1;
        cout << "You are the hare. You start the race fast and confidently!" << endl;
    } else {
        // If the user is the tortoise, they start slower but steadily
        raceProgress = 2;
        cout << "You are the tortoise. You start the race slowly, but you are steady and focused!" << endl;
    }

    // Race decision point: What will the hare or tortoise do?
    while (raceProgress != 3) { // Keep racing until the race ends
        if (raceProgress == 1) {
            // Hare's choice: take a break or continue racing
            cout << "The hare is far ahead. Do you want to: " << endl;
            cout << "1. Keep racing fast." << endl;
            cout << "2. Take a nap." << endl;
            cout << "Enter your choice (1 or 2): ";
            cin >> choice;

            while (choice != 1 && choice != 2) {
                cout << "Invalid choice! Please enter 1 to race fast or 2 to take a nap: ";
                cin >> choice;
            }

            if (choice == 1) {
                cout << "The hare continues to race fast and is way ahead of the tortoise." << endl;
                raceProgress = 1; // Hare stays ahead
            } else {
                cout << "The hare takes a nap. The tortoise is catching up!" << endl;
                raceProgress = 2; // Tortoise is catching up
            }

        } else if (raceProgress == 2) {
            // Tortoise's choice: continue racing steadily or stop to rest
            cout << "The tortoise is catching up! Do you want to: " << endl;
            cout << "1. Keep racing steadily." << endl;
            cout << "2. Take a short rest." << endl;
            cout << "Enter your choice (1 or 2): ";
            cin >> choice;

            while (choice != 1 && choice != 2) {
                cout << "Invalid choice! Please enter 1 to keep racing or 2 to rest: ";
                cin >> choice;
            }

            if (choice == 1) {
                cout << "The tortoise keeps racing steadily. The hare is still sleeping!" << endl;
                raceProgress = 2; // Tortoise is ahead
            } else {
                cout << "The tortoise takes a short rest but stays ahead!" << endl;
                raceProgress = 2; // Tortoise stays ahead
            }
        }

        // Check if the race has finished
        if (raceProgress == 1) {
            cout << "The hare has reached the finish line! The race is over." << endl;
            cout << "The hare wins!" << endl;
            raceProgress = 3; // End the race
        } else if (raceProgress == 2) {
            cout << "The tortoise reaches the finish line! The race is over." << endl;
            cout << "The tortoise wins!" << endl;
            raceProgress = 3; // End the race
        }
    }

    return 0;
}
