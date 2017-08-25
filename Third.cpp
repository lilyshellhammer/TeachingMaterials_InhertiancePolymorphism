#include <iostream>
#include <string>
using namespace std;


class Rapper{
   public:
      virtual void spit_fire() = 0;

};

class KendrickLamar: public Rapper{
   public:
      void spit_fire(){
	cout << "I can see the borrow in you, I can see the dollar in you. Little white lies, but it's no white-collar in you" << endl;
      }
};

class YoungThug: public Rapper{
    public:
       void spit_fire(){
       	cout << "Pl' tell 'em th' wa' be me, sombo'y tell'm the' don' wan' be me" << endl;
       }
};


void menu(Rapper* R){
   	int x;
	cout << "What number of rapper do you want? (1 Kendrick, 2 YT): " << endl;
	cin >> x;

	if (x == 1){
		R = new KendrickLamar;
	}
	else{
	   R = new YoungThug;
	}

	R->spit_fire();

}

int main(){
	
   Rapper* R1 = new YoungThug;
   Rapper* R2 = new KendrickLamar;
   
   R1->spit_fire();
   R2->spit_fire();
	
   Rapper *R3;
   menu(R3);
   return 0;
}
