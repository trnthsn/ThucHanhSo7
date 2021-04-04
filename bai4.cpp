#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string id;
    string name;
    double gpa;
};

void print(const std::vector<Student> &student_list)
{
    int n = student_list.size();
    for (int i = 0; i < n; i++)
    {
        cout << student_list[i].id << " ";
        cout << student_list[i].name << " ";
        cout << student_list[i].gpa << endl;
    }
}

int find(const vector<Student> &student_list, string id)
{
    int n = student_list.size();
    for (int i = 0; i < n; i++)
    {
        if (student_list[i].id == id)
            return i;
    }
    return -1;
}

vector<Student> top3(const vector<Student> &student_list)
{
    vector<Student> temp;
    int n = student_list.size();
    for(int i = 0; i < n; i++)
    {
        temp.push_back(student_list[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (temp[i].gpa < temp[j].gpa)
            {
                swap(temp[i], temp[j]);
            }
        }
    }
    std::vector<Student> top3new;
    for (int i = 0; i < 3; i++)
    {
    	top3new.push_back(temp[i]);
    }
    return top3new;
}

int main()
{
    vector<Student> students =
    {
        {"1", "Le Quang Duy", 5.5},
        {"2", "Nguyen Tan Dat", 6},
        {"10", "Cao Duy Manh", 3},
        {"4", "Nguyen Van Ngoc", 4.5},
        {"3", "Trieu Dinh Nguyen", 4}
    };
    vector<Student> top_students = top3(students);
    print(top_students);
    cout << find(students, "10") << endl;
    cout << find(students, "11") << endl;
}