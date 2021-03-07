#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Question{
public:
    void askQuestion();
    void modifyRecord();
    void displayReult();
    int quizNo(){return quiz_number;}

private:
    int total, rightAns[5], quiz_number = 0;
    char guess, gender, name[30];
    string correct_answer[5] = {"A. Jerusalem", "C. Tibet", "B. Japan", "B. Egypt", "A. Norway"};
    string feedback;
}q;

void Question :: askQuestion()
{
    for (int i = 0; i < 5; i++)
    {
        rightAns[i] = 0;
    }

    if(total != NULL)
    {
        total = 0;
    }

    cout<<"==================================================="<<endl;
    cout<<"                     QUIZ GAME                     "<<endl;
    cout<<"==================================================="<<endl;


    cout<<"\nHere some description is given. Please first read it before playing: "<<endl;
    cout<<"\n=>You will be asked a total of 5 questions in this quiz. "<<endl;
    cout<<"\n=>You will be given 4 options for each question. "<<endl;
    cout<<"\n=>You have to press A, B, C or D for the right answer. "<<endl;
    cout<<"\n=>You will be having 1 point for each question if your answer is correct otherwise no negative points for wrong answer! So you can score highest 50 points. "<<endl;

    cout<<"\n\n|||||||||||||||||||ALL THE BEST|||||||||||||||||||\n\n"<<endl;

    system("pause");
    system("cls");

    cout << "Enter your name: ";
    cin.ignore(); cin.getline(name,30);
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    if(gender == 'm' || gender == 'M')
    {   gender = 'M';   }
    else if(gender == 'f' || gender == 'F')
    {   gender = 'F';   }
    else
    {   gender = '-';   }

    // Question-1
    cout << "\n";
    cout << "What is called as 'THE HOLY LAND ?'" << endl;
    cout << "a. Jerusalem" << endl;
    cout << "b. Mathura" << endl;
    cout << "c. Mecca" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'a' || guess == 'A')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[0] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[0] << endl; }
    cout << "\n";

    system("pause");

    // Question-2
    cout << "\n";
    cout << "What is called as 'THE ROOF OF THE WORLD ?'" << endl;
    cout << "a. Nepal" << endl;
    cout << "b. Rome" << endl;
    cout << "c. Tibet" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'c' || guess == 'C')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[1] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[1] << endl; }
    cout << "\n";

    system("pause");

    // Question-3
    cout << "\n";
    cout << "What is called as 'THE LAND OF RISING SUN ?'" << endl;
    cout << "a. Chicago" << endl;
    cout << "b. Japan" << endl;
    cout << "c. Tibet" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'b' || guess == 'B')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[2] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[2] << endl; }
    cout << "\n";

    system("pause");

    // Question-4
    cout << "\n";
    cout << "What is called as 'THE GIFT OF NILE ?'" << endl;
    cout << "a. Chicago" << endl;
    cout << "b. Egypt" << endl;
    cout << "c. Africa" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'b' || guess == 'B')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[3] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[3] << endl; }
    cout << "\n";

    system("pause");

    // Question-5
    cout << "\n";
    cout << "What is called as 'THE LAND OF MIDNIGHT SUN ?'" << endl;
    cout << "a. Norway" << endl;
    cout << "b. Japan" << endl;
    cout << "c. Australia" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'a' || guess == 'A')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[4] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[4] << endl; }
    cout << "\n";

    for (int j = 0; j < 5; j++)
    {
        total += rightAns[j];
    }

    if (total == 50)
    {feedback = "Excellent!";}
    else if (total == 40)
    {feedback = "Awesome!";}
    else if (total == 30)
    {feedback = "Nice";}
    else
    {feedback = "Better luck for next time";}

    cout << "\n\n\nYour total score is " << total << " Points" << endl;
    quiz_number++;
}

void Question :: modifyRecord()
{
    for (int i = 0; i < 5; i++)
    {
        rightAns[i] = 0;
    }

    if(total != NULL)
    {
        total = 0;
    }

    cout<<"==================================================="<<endl;
    cout<<"                     QUIZ GAME                     "<<endl;
    cout<<"==================================================="<<endl;


    cout<<"\nHere some description is given. Please first read it before playing: "<<endl;
    cout<<"\n=>You will be asked a total of 5 questions in this quiz. "<<endl;
    cout<<"\n=>You will be given 4 options for each question. "<<endl;
    cout<<"\n=>You have to press A, B, C or D for the right answer. "<<endl;
    cout<<"\n=>You will be having 1 point for each question if your answer is correct otherwise no negative points for wrong answer! So you can score highest 50 points. "<<endl;

    cout<<"\n\n|||||||||||||||||||ALL THE BEST|||||||||||||||||||\n\n"<<endl;

    system("pause");
    system("cls");

    cout << "Enter your name: ";
    cin.ignore(); cin.getline(name,30);
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    if(gender == 'm' || gender == 'M')
    {   gender = 'M';   }
    else if(gender == 'f' || gender == 'F')
    {   gender = 'F';   }
    else
    {   gender = '-';   }

    // Question-1
    cout << "\n";
    cout << "What is called as 'THE HOLY LAND ?'" << endl;
    cout << "a. Jerusalem" << endl;
    cout << "b. Mathura" << endl;
    cout << "c. Mecca" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'a' || guess == 'A')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[0] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[0] << endl; }
    cout << "\n";

    system("pause");

    // Question-2
    cout << "\n";
    cout << "What is called as 'THE ROOF OF THE WORLD ?'" << endl;
    cout << "a. Nepal" << endl;
    cout << "b. Rome" << endl;
    cout << "c. Tibet" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'c' || guess == 'C')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[1] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[1] << endl; }
    cout << "\n";

    system("pause");

    // Question-3
    cout << "\n";
    cout << "What is called as 'THE LAND OF RISING SUN ?'" << endl;
    cout << "a. Chicago" << endl;
    cout << "b. Japan" << endl;
    cout << "c. Tibet" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'b' || guess == 'B')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[2] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[2] << endl; }
    cout << "\n";

    system("pause");

    // Question-4
    cout << "\n";
    cout << "What is called as 'THE GIFT OF NILE ?'" << endl;
    cout << "a. Chicago" << endl;
    cout << "b. Egypt" << endl;
    cout << "c. Africa" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'b' || guess == 'B')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[3] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[3] << endl; }
    cout << "\n";

    system("pause");

    // Question-5
    cout << "\n";
    cout << "What is called as 'THE LAND OF MIDNIGHT SUN ?'" << endl;
    cout << "a. Norway" << endl;
    cout << "b. Japan" << endl;
    cout << "c. Australia" << endl;
    cout << "d. None of above" << endl;
    cout << "Enter your answer: ";
    cin >> guess;
    if (guess == 'a' || guess == 'A')
    {   cout<<"\nCorrect..!"<<endl;   rightAns[4] = 10;   }
    else { cout << "\nYour ans. is wrong..!, right ans. is" << endl << correct_answer[4] << endl; }
    cout << "\n";

    for (int j = 0; j < 5; j++)
    {
        total += rightAns[j];
    }

    if (total == 50)
    {feedback = "Excellent!";}
    else if (total == 40)
    {feedback = "Awesome!";}
    else if (total == 30)
    {feedback = "Nice";}
    else
    {feedback = "Better luck for next time";}

    cout << "\n\n\nYour total score is " << total << " Points" << endl;
    cout << "\nYour record is successfully modified..!" << endl;
}

void Question :: displayReult()
{
    cout << "\n";
    cout << "Quiz number            : " << quiz_number << endl;
    cout << "Participle names       : " << name << endl;
    cout << "Participle gender      : " << gender << endl;
    cout << "Your total score       : " << total << " out of 50 pts." << endl;
    cout << "Feedback               : " << feedback << endl;
    cout << "\n";
}

void addData()
{
    ofstream fout;
    fout.open("Quiz.dat",ios::binary|ios::out|ios::app);
    q.askQuestion();
    fout.write((char*)&q,sizeof(q));
    fout.close();
    cout << "\nYour Quiz is taken...!"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Quiz.dat",ios::in|ios::binary);
    while(fin.read((char*)&q,sizeof(q)))
    {
        q.displayReult();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Quiz.dat",ios::in|ios::binary);
    cout<<"Enter Quiz Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&q,sizeof(q)))
    {
        if(n==q.quizNo())
        {
            q.displayReult();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"The Quiz No. "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Quiz.dat",ios::in|ios::binary);
    fout.open("TempQuiz.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Order Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&q,sizeof(q)))
    {
        if(n == q.quizNo())
        {
            cout<<"The Following Quiz No. "<< n <<" has been deleted:\n";
            q.displayReult();
            tout.write((char*)&q,sizeof(q));
            flag++;
        }
        else
        {
            fout.write((char*)&q,sizeof(q));
        }
    }
    fout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Quiz No. "<< n <<" not found....\n\n";
    remove("Quiz.dat");
    rename("TempQuiz.dat","Quiz.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Quiz.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Quiz Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&q,sizeof(q)))
    {
        pos = fio.tellg();
        if(n == q.quizNo())
        {
            cout<<"Following Quiz No. "<< n <<" will be Changed:\n";
            q.displayReult();
            cout<<"\n\nNow Enter the New Details....\n";
            q.modifyRecord();
            fio.seekg(pos-sizeof(q));
            fio.write((char*)&q,sizeof(q));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "The Quiz No. " << n << " not found....!\n\n";
}

int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t     Welcome To G.K. Quiz \n";
        cout<<"\t\t==============================================\n\n";
        cout<<"\t\t\t1. Take new quiz                 \n";
        cout<<"\t\t\t2. Display quiz result           \n";
        cout<<"\t\t\t3. Search quiz result            \n";
        cout<<"\t\t\t4. Delete quiz record            \n";
        cout<<"\t\t\t5. Modify record                 \n";
        cout<<"\t\t\t6. Exit                        \n\n";
        cout<<"\t\t----------------------------------------------\n";
        cout<<"Enter choice: ";
        cin>>ch;
        system("cls");
        switch(ch)
        {
            case 1: addData(); break;
            case 2: displayData(); break;
            case 3: searchData(); break;
            case 4: deleteData(); break;
            case 5: modifyData(); break;
            case 6: cout << "\n\n\nThank You For Using This Program.....\n\n" << endl; exit(0); break;
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}