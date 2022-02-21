#include<iostream>

#include<conio.h>

 

using namespace std;

 

class matrix{

 int a;

 int b;

 int i,j,r1,c1,r2,c2,k;

 float A[3][3], B[3][3];

 float Res[3][3];

 public:

  void readmatrixA();

  void readmatrixB();

  void displaymatrixA();

  void displaymatrixB();

  void multiplymatrix();

};

 

void matrix::readmatrixA()

{

 cout<<"*__ READING MATRIX A __*";

 cout<<endl;

 cout<<"Enter row1 Dimension Value : ";

 cin>>r1;

 cout<<"Enter col1 Dimension Value : ";

 cin>>c1;

 for(i=0;i<r1;i++)

 {

  for(j=0;j<c1;j++)

  {

   cout<<"A["<<i<<"]["<<j<<"] : ";

   cin>>A[i][j];

  }

 }

}

 

void matrix::readmatrixB()

{

 cout<<"*__ READING MATRIX B __*";

 cout<<endl;

 cout<<"Enter row2 Dimension Value : ";

 cin>>r2;

 cout<<"Enter col2 Dimension Value : ";

 cin>>c2;

 for(i=0;i<r2;i++)

 {

  for(j=0;j<c2;j++)

  {

   cout<<"B["<<i<<"]["<<j<<"] : ";

   cin>>B[i][j];

  }

 }

}

 

 

void matrix::displaymatrixA()

{

 cout<<"*__ DISPLAYING MATRIX A __*";

 cout<<endl;

 for(i=0;i<r1;i++)

 {

  for(j=0;j<c1;j++)

  {

   cout<<" "<<A[i][j];

  }

  cout<<endl;

 }

}

 

 

 

void matrix::displaymatrixB()

{

 cout<<"*__ DISPLAYING MATRIX B __*";

 cout<<endl;

 for(i=0;i<r2;i++)

 {

  for(j=0;j<c2;j++)

  {

   cout<<" "<<B[i][j];

  }

  cout<<endl;

 }

}

 

void matrix::multiplymatrix()

{

    cout<<"*__ Multiplying a Matrix __**";

   // if(c1!=r2)

    //{

      //  break;

    //}

    //else

    //{

        for(i = 0; i < r1; i++)

        {

         for(j = 0; j < c2; j++)

            {

                Res[i][j]=0;

            }

        }

    for(i = 0; i < r1; i++)

    {

        for(j = 0; j < c2; j++)

        {

            for(k = 0; k < c1; k++)

            {

                Res[i][j] += A[i][k] * B[k][j];

            }  

        }

    }

    cout << endl << "Output Matrix: " << endl;

     for(i = 0; i < r1; ++i)

     {

      for(j = 0; j < c2; ++j)

         {

             cout << " " << Res[i][j];

         }

         cout << endl;

     }

   

   

}

int main()

{

 matrix m;

 m.readmatrixA();

 m.readmatrixB();

 m.displaymatrixA();

 m.displaymatrixB();

 m.multiplymatrix();

 getch();

 return(0);

}