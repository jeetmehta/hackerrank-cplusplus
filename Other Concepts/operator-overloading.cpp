void print_vector(vector <int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

void print_matrix(vector <vector <int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

class Matrix {
    public:
        vector < vector <int>> a;
        Matrix operator + (Matrix b) {
            for (int i = 0; i < b.a.size(); i++)
            {
                for (int j = 0; j < b.a[0].size(); j++)
                {
                    this->a[i][j] = this->a[i][j] + b.a[i][j]; 
                }
            }
            return *this;
        };
};