#include <iostream>
using namespace std;

main ()
{
  struct fecha{
    int dia;
    int mes;
    int ano;
  }fc1 = {21, 2, 2001};
  
  const int MAX = 2;
  fecha fc[MAX];
  int a = 0;
  int i = 1;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  while ( a == 0 )
  {
  
  cout << " introduce un año " << endl;
  cin >> fc[i].ano;
  
  if (( fc[i].ano % 4 == 0) && (( fc[i].ano % 100 != 0) || (fc[i].ano % 400 == 0)))
  {
    cout << "este año es bisiesto" << endl;
    while ( b == 0)
    {
  cout << "introduce un mes " << endl;
  cin >> fc[i].mes;
  
  if (fc[i].mes == 2){
    while (c == 0)
    {
    cout << "introduce un día " << endl;
    cin >> fc[i].dia;
    if (fc[i].dia == 0)
      cout << "ese dia no existe" << endl;
    if (fc[i].dia > 29)
      cout << " ese dia no existe" << endl;
    if (fc[i].dia != 0 && fc[i].dia !> 29)
    c++;
    
    }
  }
  if (fc[i].mes < 1)
    cout << "ese mes no existe" << endl;
  if (fc[i].mes > 12)
    cout << "ese mes no existe" << endl;
  if ((fc[i].mes !< 1) && (fc[i].mes !> 12))
    b++;
    }
  }
  
  else
    while (d == 0){
  cout << "introduce un mes " << endl;
  cin >> fc[i].mes;
  
  if (fc[i].mes == 2){
    while (f == 0)
    {
    cout << "introduce un día " << endl;
    cin >> fc[i].dia;
    if (fc[i].dia == 0)
      cout << "ese dia no existe" << endl;
    if (fc[i].dia > 28)
      cout << " ese dia no existe" << endl;
    if ((fc[i].dia != 0) && (fc[i].dia !> 28))
      f++;
    }
  }
   if (fc[i].mes < 1)
    cout << "ese mes no existe" << endl;
    if (fc[i].mes > 12)
    cout << "ese mes no existe" << endl;
   
    if ((fc[i].mes !< 1) && (fc[i].mes !> 12))
    d++;
    }
  a++;
  }
}