class Person {
    public:
        Person();
        string name;
        int age;
        virtual void getdata();
        virtual void putdata();
};

Person::Person()
{
}

void Person::getdata()
{
    cin >> name >> age;
}

void Person::putdata()
{
    cout << name << " " << age << endl;
}

class Professor : public Person {
    public:
        int publications;
        static int cur_id;
        Professor();
        void getdata();
        void putdata();
};

Professor::Professor()
{
}

int Professor::cur_id = 1;

void Professor::getdata()
{
    cin >> name >> age >> publications;
}

void Professor::putdata()
{
    cout << name << " " << age << " " << publications << " " << cur_id << endl;
    cur_id++;
}

class Student : public Person {
    public:
        int marks[6];
        static int cur_id;
        void getdata();
        void putdata();
        Student();
};

Student::Student()
{
}

int Student::cur_id = 1;

void Student::getdata()
{
    cin >> name >> age;
    for (int i = 0; i < 6; i++)
    {
        cin >> marks[i];
    }    
}

void Student::putdata()
{
    cout << name << " " << age << " ";
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += marks[i];
    }
    cout << sum << " " << cur_id << endl;
    cur_id++;
}