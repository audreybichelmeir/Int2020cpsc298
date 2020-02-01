#include <iostream>
#include <string>
using namespace std;

class twodarray
{
  public:
    void Print(int arr[][5], int row, int col);
  private:

};

//PRINTS THE ARRAY
void twodarray::Print(int arr[][5], int row, int col)
{
  cout << "printing" << endl;
  for(int i=0; i < row; ++i)
  {
      for(int j=0; j < col; ++j)
      cout<<arr[i][j]<<" ";
      cout<<endl;
  }
}

int main (int argc, char **argv)
{
  //INPUT ARRAY
  int a[4][5];
  twodarray arr;
  // 4 rows & 5 columns

  for (int i = 0; i < 4; ++i){
    for (int j = 0; j < 5; ++j){
      cin >> a[i][j];

    }
  }

  // cout << "printing..." << endl;
  //  for(int i=0;i < 4;i++)
  //  {
  //      for(int j=0;j<5;j++)
  //      cout << a[i][j] << " ";
  //      cout << endl;
  //  }
  arr.Print(a,4,5);

  return 0;
}
