#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename)
{
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int empN;
    cout << "Enter number of employees: ";
    cin >> empN;
    ofs << empN << "\n";

    int ID;
    string EMP, DEP;
    double SAL;

    for(int i = 0; i < N; i++)
    {
        cout << i+1 << ". Enter Employee ID, Employee Name, Department Name, and Salary: \t";
        cin >> ID >> EMP >> DEP >> SAL;
        ofs << ID << "\t" << EMP << "\t" << DEP << "\t" << SAL << "\n";
    }

    ofs.close();

    return empN;
}

int readFile(string filename)
{
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int N;
    int ID;
    string EMP, DEP;
    double SAL;
    double sum, avg;
    
    ifs >> N;
    
    cout << "ID" << "\t" << "Name" << "\t" << "Department" << "\t" << "Salary" << endl;

    for(int i = 0; i < N; i++)
    {
        ifs >> ID >> EMP >> DEP >> SAL;
        cout << ID << "\t" << EMP << "\t" << DEP << "\t" << SAL << endl;
        sum += SAL;
    }
    
    avg = sum / N;

    cout << "Total: " << sum << "\t" << "Average: "<< avg << endl;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}