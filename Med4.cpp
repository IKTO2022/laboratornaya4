#include <iostream>
using namespace std;


class Medicine 
{ 
 public: 
        Medicine(); 
        Medicine(std::string st, int y, int h); 
        ~Medicine(); 
        std::string getPreporat(); 
        void setPreporat(std::string val); 
        int getCount(); 
        void setCount(int val); 
        int getValue();
        void setValue(int val);
 private: 
        std::string name; 
        int count; 
        int value;
}; 



int main(){
	Medicine p1; 
    Medicine p2("Antiangin", 200, 150); 
    p1.setPreporat("Citrin"); 
    p1.setCount(150); 
    p1.setValue(300);

    cout << p1.getPreporat() << "  " << p1.getCount() << "  " << p1.getValue() << endl; 
    cout << p2.getPreporat() << "  " << p2.getCount() << "  " << p2.getValue() << endl; 
    Medicine p3[3]; 
    std::string tempDrug;
    int tempCount;
    int tempValue;
    for(int i=0;i<3;i++) 
    { 
        cout <<"enter drug->"; 
        cin >> tempDrug; 
        p3[i].setPreporat(tempDrug); 
        cout <<"enter count->"; 
        cin >> tempCount; 
        p3[i].setCount(tempCount); 
        cout <<"enter Value->"; 
        cin >> tempValue; 
        p3[i].setValue(tempValue); 
        cout<<endl;
    }
	 
    for(int i=0;i<3;i++) 
       cout << p3[i].getPreporat() << "  " << p3[i].getCount() << "  " << p3[i].getValue() << endl; 
    return 0; 
} 
	Medicine::Medicine() 
	{ 
		name = "Noname";
		count = 0;
	
	} 
	
	Medicine::Medicine(std::string st, int y, int h) 
	{ 
	    name = st; 
	    count = y;
		value = h; 
	} 
	
	Medicine::~Medicine() 
	{ 
	} 
	
	std::string Medicine::getPreporat() 
	{ 
	    return name;
	} 
	
	void Medicine::setPreporat(std::string val) 
	{ 
	    name = val;
	} 
	
	int Medicine::getCount() 
	{ 
	    return count;
	} 
	
	void Medicine::setCount(int val) 
	{ 
	    count = val;
	}
	
	int Medicine::getValue() 
	{ 
	    return value;
	} 
	
	void Medicine::setValue(int val) 
	{ 
	    value = val;
	}

