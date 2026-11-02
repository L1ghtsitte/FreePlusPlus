#include <iostream>

int main() 
{

   // for (начало; условие; шаг)
   //{
   //Код 
   //}

   for (int i = 1; i <= 5; i++)

   {
      std::cout<< "Nuber:" << i << std::endl;
   }
    

   for (int i = 10; i >= 1; i--)

   {
      std::cout<< "Nuber:" << i << std::endl;
   }


   for (int i = 0; i <= 20; i += 2) // i = i + 2

   {
      std::cout<< "Nuber:" << i << std::endl;
   }

   for (int i = 1; i <= 20; i += 2)

   {
      std::cout<< " " << i;
   }

   std::cout << std::endl;

   for (int i = -5; i <= 5; i++)
   
   {
      std::cout<< " " << i;
   }

   std::cout << std::endl;

   for (int i = 1; i <= 20; i++)

   {
      if (i % 2 == 0)
      {

      std::cout<< " " << i;

      }
   }

   std::cout << std::endl;

   int sum = 0;

   for (int i = -5; i <= 5; i++)
   
   {
      if (i > 0)
      {
         sum += i;
      }

   }
   
   std::cout<< "Summ: " << sum;
   std::cout << std::endl;

   for (int i = 1; i <= 10; i++)
   
   {
      if (i == 5)
      {
         break;
      }

      std::cout<< " " << i;
   }

   std::cout << std::endl;

   for (int i = 1; i <= 5; i++)
   
   {
      if (i == 3)
      {
         continue;
      }

      std::cout<< " " << i;
   }

   std::cout << std::endl;

   int i = 1;

   for (int i = 1; i <= 5; i++)
   {
      std::cout<< "Nuber:" << i << std::endl;
   }
   
   std::cout<< "Nuber:" << i << std::endl;

   for (int i = 1; i <= 9; i++)
   {
      for (int j = 1; j <=9; j++)
      {
         std::cout << i << " * " << j << " = " << i * j << "\t";
      }

      std::cout << std::endl;
   }
   
   for (int i = 1; i <= 5; i++) std::cout<< "Nuber:" << i << std::endl;
   std::cout << "hello";

   for (int i = 1; i <= 5; i++) 
   {

   std::cout<< "Nuber:" << i << std::endl;
   std::cout << "hello";

   }

   for (int i = 1; i <= 5; i++) { std::cout<< "Nuber:" << i << std::endl; std::cout << "hello"; }

   //for (;;)
   //{
   //   std::cout << "hello";
   //}

   std::cout << std::endl;

   std::cout << "num: ";

   for (int i = 0; i <= 100; i++) 
   {
      std::cout << i << " ";
   }

   std::cout << std::endl;

   std::cout << "num: ";

   for (int i = 100; i >= 1; i--) 
   {
      std::cout << i << " ";
   }

   std::cout << std::endl;

   std::cout << "num: ";

   for (int i = 0; i <= 20; i += 2) 
   {
      std::cout << i << " ";
   }

   std::cout << std::endl;

   std::cout << "num: ";

   for (int i = 1; i <= 20; i += 2) 
   {
      std::cout << i << " ";

      // i = 100;
   }

   std::cout << std::endl;

}