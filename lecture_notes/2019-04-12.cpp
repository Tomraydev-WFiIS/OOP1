//Przyklad odwiklania stosu
int main(int argc, char *argv[]){

	Test1 a("aTest1");
	Test2 b("bTest2");
	Test1 *ptr;

	try{
		int a = 0;
		Test1 c("cTest1");
		Test2 d("dTest2");

		ptr = new Test1("ptrTest1");

		cout << "\nRzucam\n";
		throw a;
	}
	catch (const int &)
	{
		cout << "\nPo zlapaniu wyjatku\n";
	}
	ptr->print();
}

//////////////////////////////////////////////
make_unique //szablon
unique_ptr<>
//obiekty automatyczne - obsluga wyjatkow
