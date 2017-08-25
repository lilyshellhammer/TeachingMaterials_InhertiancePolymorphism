#include <iostream>
#include <string>
using namespace std;


class Rapper{
   public:
      virtual void spit_fire(){
      	cout << "None" << endl;
      }

};

class Chance: public Rapper{
   public:
      void spit_fire(){
	cout << "This ain't no intro, this the entree" << endl;      	
      }
};

void function(Rapper* R1){
  int x = 1;
	if(x==1)
	   R1 = new Chance;
	else
	   R1 = new Rapper;
}

int main(){
	
   Rapper* R1 = new Rapper;
   Rapper* R2 = new Chance;

   R1->spit_fire();
   R2->spit_fire();

   return 0;
}
