//Abel Anand
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdio.h>
//if ur looking at this you should make all your programs time complex smh imao
using namespace std;

struct info {
    string name;
    int age;
    int height;
    int weight;
    string phoneNumber;
};

int main() {
    vector <info> ppls;

    ifstream in;
    in.open("/Users/Abel/Desktop/Cpp/searchAVector/searchAVector/savIn.txt");

    string temp;

    if (!in.is_open()) {
        cout << "File not found\n";
    }

    info person;
    //temporary instance of the struct

    while (getline(in, person.name, ',')) {
        getline(in, temp, ',');
        person.age = stoi(temp);
        getline(in, temp, ',');
        person.height = stoi(temp);
        getline(in, temp, ',');
        person.weight = stoi(temp);
        getline(in, person.phoneNumber);
        ppls.push_back(person);
    }
    in.close();
    while (1) {
        int type;
        string input;
        cout << "What would you like to search for\n1. Name\t2. Age\t3. Height\t4. Weight\t5. Phone Number\t0. QUIT\n";
        cin >> type;
        if (type == 0) {
            exit(0);
        }
        cout << "Enter the value you want to search for\n";
        cin >> input;
        int times = 0;
        switch (type) {
            case 1:
                for(int i = 0; i < input.length(); i++) {
                    input[i] = tolower(input[i]);
                }
                for (int i = 0; i < ppls.size(); i ++) {
                    if (ppls[i].name == input) {
                        cout << "Age = " << ppls[i].age << "\tHeight = " << ppls[i].height << "\t\tWeight = " << ppls[i].weight << "\tPhone = " << ppls[i].phoneNumber << endl << endl;
                        times++;
                    }
                }
                if (times == 0) {
                    cout << "Couldnt find anyone\n\n";
                }
                break;
            case 2:
                for (int i = 0; i < ppls.size(); i++) {
                    if (ppls[i].age == stoi(input)) {
                        cout << ppls[i].name << " ";
                        times++;
                    }
                }
                if (times == 0) {
                    cout << "Couldnt find anyone";
                }
                cout << endl << endl;
                break;
            case 3:
                for (int i = 0; i < ppls.size(); i++) {
                    if (ppls[i].height == stoi(input)) {
                        cout << ppls[i].name << " ";
                        times++;
                    }
                }
                if (times == 0) {
                    cout << "Couldnt find anyone";
                }
                cout << endl << endl;
                break;
            case 4:
                for (int i = 0; i < ppls.size(); i++) {
                    if (ppls[i].weight == stoi(input)) {
                        cout << ppls[i].name << " ";
                        times++;
                    }
                }
                if (times == 0) {
                    cout << "Couldnt find anyone";
                }
                cout << endl << endl;
                break;
            case 5:
                for (int i = 0; i < ppls.size(); i++) {
                    if (ppls[i].age == stoi(input)) {
                        cout << ppls[i].name << " ";
                        times++;
                    }
                }
                if (times == 0) {
                    cout << "Couldnt find anyone";
                }
                cout << endl << endl;
                break;
        }
    }
}
