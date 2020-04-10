#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
void SetColor(int value){
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

int Guess;
int Total;
class Question{
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;
	public:
		void setValues(string,string,string,string,string,int,int);
		void askQuestion();
};
int main(){
SetColor(6);
cout<<"********************************************"<<endl;
SetColor(1);cout<<"*             * WELCOME TO C++ QUIZ!*      *"<<endl;
SetColor(2);cout<<"*           ---------------------------    *"<<endl;
SetColor(3);cout<<"*                     BY                   *"<<endl;
SetColor(4);cout<<"*                                          *"<<endl;
SetColor(5);cout<<"*                   SURJEET                *"<<endl;
SetColor(6);cout<<"********************************************"<<endl;
cout<<endl;SetColor(8);
cout<<"Press Enter to start the quiz......"<<endl;
cin.get();
string Name;
int Age;
cout<<"what's your name "<<endl;
cin>>Name;
cout<<endl;
cout<<"How old are you? "<<endl;
cin>>Age;
cout<<endl;
string Respond;
cout<<"Are you ready to take the quiz "<<Name<<"? YEs/NO."<<endl;
cin>>Respond;
if(Respond=="yes"){
	cout<<endl<<"OK, GOOD LUCK!"<<endl;
	cout<<endl;
}
else{
	cout<<"OK, GoodBye!"<<endl;
	return 0;
	}
Question q1;
Question q2;
Question q3;
Question q4;
Question q5;
Question q6;
Question q7;
Question q8;
Question q9;
Question q10;
q1.setValues("What is the only function all C++ programs must contain","Start()","System()","main()","program()",3,10);
q2.setValues("What is the only function all C++ programs must contain","*/comments/*","/*comments*/","**comments**","/comment/",2,10);
q3.setValues("The statement i++ is equilanent to: ","i=i+7","i=i+1","i=i-1","i--",2,10);
q4.setValues("The statement i-- is equilanent to: ","i=i+7","i=i+1","i=i-1","i--",3,10);
q5.setValues("When a data type must contain decimal numbers, assin the type: ","int","char","double","long int",3,10);
q6.setValues("Th name of the variable known aas its: ","identifiers","constants","data types","base",1,10);
q7.setValues("IN int main(), what does the int stand for?","initializer","integer","inheritance","nothing",2,10);
q8.setValues("The relational operator for equal is ","==",">=","=","<",1,10);
q9.setValues("The statement i++ is known as to: ","post decrement","nothing","preincreament","postIncrement",4,10);
q10.setValues("which langauage operator this is ''>>'' ? ","pyhton","java","c++","c",3,10);
q1.askQuestion();
q2.askQuestion();
q3.askQuestion();
q4.askQuestion();
q5.askQuestion();
q6.askQuestion();
q7.askQuestion();
q8.askQuestion();
q9.askQuestion();
q10.askQuestion();
cout<<"your Total Score is "<<Total<<" out of 100"<<endl;
cout<<endl;
if(Total>=70){
SetColor(1);cout<<"Great you passed the quiz! "<<endl<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<"$                                       $"<<endl;
cout<<"$                                       $"<<endl;
cout<<"$              **Congratulations**      $"<<endl;
cout<<"$                                       $"<<endl;
cout<<"$                                       $"<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<endl<<endl<<"\t @ press enter  for quiting the game @"<<endl;
cin.get();
}
else{
		cout<<"$   ***Sorry, you failed the quiz***    $"<<endl;
	cout<<endl;
	cout<<endl<<"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<endl<<endl<<"$      ***better luck next time***     $"<<endl;
cout<<endl<<endl<<"\t @ press enter  for quiting the game @"<<endl;
cin.get();	
}

}
void Question::setValues(string q,string a1,string a2,string a3,string a4,int ca,int pa){
	Question_Text=q;
	Answer_1=a1;
	Answer_2=a2;
	Answer_3=a3;
Answer_4=a4;
Correct_Answer=ca;
Question_Score=pa;

}
void Question::askQuestion(){
	cout<<endl;
	cout<<Question_Text<<endl;
	cout<<"1. "<<Answer_1<<endl;
cout<<"2. "<<Answer_2<<endl;
cout<<"3. "<<Answer_3<<endl;
cout<<"4. "<<Answer_4<<endl<<endl;
cout<<"what is your answer!"<<endl;
cin>>Guess;
if(Guess==Correct_Answer){
	cout<<endl;
	cout<<"Great! your answer is correct. "<<endl;
	Total=Total+Question_Score;
	cout<<"Score: "<<Question_Score<<"out of "<<Question_Score<<"!"<<endl;
	cout<<endl;
	cout<<"------------------------------------------------------------------"<<endl;   
cout<<"|                         0 0 0 0 0                               |"<<endl;
cout<<"|                       0          0                              |"<<endl;
cout<<"|                      0            0                             |"<<endl;
cout<<"|                     0              0                            |"<<endl;
cout<<"|                     0  <|      |>  0                            |"<<endl;
cout<<"|                     0      |       0                            |"<<endl;
cout<<"|                     0              0                            |"<<endl;
cout<<"|                     0  __________ 0                             |"<<endl;
cout<<"|                      0           0                              |"<<endl;
cout<<"|                        0 0 0 0 0                                |"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
	}
	else{
		cout<<endl<<" OH!, No you are wrong. "<<endl;
		cout<<endl<<"  Score: 0 "<<"out of "<<Question_Score<<"!"<<endl;
		cout<<endl<<"The correct answer is "<<Correct_Answer<<"."<<endl;
		cout<<endl;
		
		cout<<"------------------------------------------------------------------"<<endl;   
cout<<"|                         0 0 0 0                                |"<<endl;
cout<<"|                       0         0                              |"<<endl;
cout<<"|                      0           0                             |"<<endl;
cout<<"|                     0             0                            |"<<endl;
cout<<"|                     0   >|     |<  0                           |"<<endl;
cout<<"|                     0       |      0                           |"<<endl;
cout<<"|                     0    _____     0                           |"<<endl;
cout<<"|                     0   (_____)   0                            |"<<endl;
cout<<"|                      0           0                             |"<<endl;
cout<<"|                        0 0  0  0                               |"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
	}
}
