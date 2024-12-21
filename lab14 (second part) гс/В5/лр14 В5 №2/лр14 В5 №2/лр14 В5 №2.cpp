//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_CTYPE, "rus");
//	int mas[10][10], i, j, n, m;
//	cout << "Введите n и m: " << endl;
//	cin >> n >> m;
//	for ( i = 0; i < n; i++)
//		for ( i = 0; i < m; i++)
//		{
//			cout << "a[" << i << "][" << j << "]=";
//			cin >> mas[i][j];
//		}
//
//
//}
//

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//const int M = 2, N = 3;
//int main()
//{
//    int i, j, Mas[M][N];
//    for (i = 0; i < M; i++)  //ввод элементов матрицы
//    {
//        for (j = 0; j < N; j++)
//        {
//            cout << "Введите ... " << endl;
//            cin >> N >> M;
//        }
//    }
//    for (i = 0; i < M; i++)  //вывод в виде матрицы
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%d\t", Mas[i][j]);
//        }
//        printf("\n\n");
//    }




//#include <iostream>
//using namespace std;
//
//void main() {
//	setlocale(LC_CTYPE, "rus");
//	int mas[10][10], i, j, n, m;
//	cout << "Введите n и m: " << endl;
//    cin >> n >> m;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//        {
//            cout << "a[" << i << "][" << j << "]=";
//            cin >> mas[i][j];
//        }


#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int n, m, i, j, a[10][10], count = 0;
    cout << "Введите n и m : " << endl;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                count = i;
            }
        }
    }
        for (i = 0; i < m; i++)
        {
            a[count - 1][i] = a[count - 1][i] * -1;
        }
    

        
        
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    
}