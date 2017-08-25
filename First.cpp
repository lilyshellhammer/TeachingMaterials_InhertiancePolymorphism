#include <iostream>
#include <string>

using namespace std;


class Rapper{
   private:
      int nope;
   protected:
      string lyrics;
      int dreams;

   public:
      void set_lyrics(string str){
      	lyrics = str;
      }
      void set_dreams(int n){
      	dreams = n;
      }
      void set_nope(int n){
	nope = n;
      }
      string get_lyrics(){
      	return lyrics;
      }
      int get_dreams(){
      	return dreams;
      }
      int get_nope(){
      	return nope;
      }
 //     */
};


class Chance: public Rapper {
	public:
	   int blessings;
};

int main(){
	Rapper* R1 = new Rapper;
	R1->set_lyrics("lyrics");
	R1->set_nope(100);
	R1->set_dreams(5);

	cout << R1->get_dreams() << endl;
	cout << R1->get_lyrics() << endl;
	cout << R1->get_nope() << endl;
	
	Chance* R2 = new Chance;
	R2->set_lyrics("cigarettes on cigarettes my mama think I stank");
	R2->set_dreams(100);

	return 0;
}
