#include <iostream>
using namespace std;

class Student;
class Mentor;
class Skill;


class Student {
    private:
        string studentID;
        string name;
        int age;
        Skill sportsIntereset[3];
        Mentor *mentorAssigned[3];
    public:
        Student(string id, string n, int a): studentID(id), name(n), age(a) {
            cout << "Student constructor called\n";
        };
        void registerForMentorship(Mentor &m);
        void viewMentorDetails();
        void updateSportsInterest(Sport s);

}

void Student::registerForMentorship(Mentor &m) {
    for(int i = 0; i < m.maxLearners; i++) {
        if(m.assignedLearner[i] == nullptr) {
            assignedLearner(*this);
            for(int i = 0; i < 3; i++) {
                if(mentorAssigned[i] == nullptr) {
                    mentorAssigned[i] = new m;
                }
            }
        }
        else {
            cout << "Students full\n";
        }
    }
}

void Studnet::viewMentorDetails() {
    for(int i = 0;i)
}

class Mentor {
    string mentorID;
    string name;
    int maxLearners;
    string sportsExpertise[maxLearners];
    Student *assignedLearners[maxLearners];
    public:
        Mentor(string id, string n, int maxLs): mentorID(id), name(n), maxLearners(maxLs) {
            cout << "Mentor constructor called\n";
        }
        void assignedLearner(Student &s);
        void removeLearner(Student &s);
        void viewLearners();
        void provideGuidance();
}

class Sport {
    string skillID;
    string skillName;
    string description;
    Skill(string id, string name, string desc): skillID(id), skillName(name), description(desc) {
        cout << "Skill constuctor called\n";
    }
    public:
        void showSkillDetails(); 
        void updateSkillDescription(String newDescription);

}



int main() {





    return 0;
}