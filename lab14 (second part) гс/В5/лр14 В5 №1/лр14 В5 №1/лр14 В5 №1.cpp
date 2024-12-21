#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int p = 1, s = 0, n, m, i, j, a[100][100];
    cout << "Введите n и m : "<<endl;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if ((a[i][j] / 2) % 2 == 1 && a[i][j] % 2 == 0)
            {
                s = s + a[i][j];
                p = p * a[i][j];
                cout << a[i][j];
            }
    for (i = 0; i < n; i++) {
        cout << endl;
        for (j = 0; j < m; j++)
            cout << " " << a[i][j];
    }
    cout << "Сумма элементов, которые при делении на два дают нечётное число = " << s << endl;
    cout << "Произведение элементов, которые при делении на два дают нечётное число = " << p << endl;
}