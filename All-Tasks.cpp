#include<iostream>
using namespace std;
main(){

string name;
int roll_no;
float aggregate;
char section;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your roll number: ";
cin>>roll_no;
cout<<"Enter your aggregate: ";
cin>>aggregate;
cout<<"Enter your section: ";
cin>>section;
cout<<"Student Information:"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll Number: "<<roll_no<<endl;
cout<<"Aggregate: "<<aggregate<<endl;
cout<<"Section: "<<section<<endl;
}
#include<iostream>
using namespace std;
main(){

int pounds;
float kgs;
cout<<"Enter weight in pounds: ";
cin>>pounds;
kgs=pounds * 0.45;
cout<<pounds<<" pounds is equal to "<<kgs<<" kilograms.";
} 
#include<iostream>
using namespace std;
main(){

float length;
float width;
float area;
cout<<"Enter the length of the rectangle: ";
cin>>length;
cout<<"Enter the width of the rectangle: ";
cin>>width;
area= length * width;
cout<<"The area of the rectangle is: "<<area;
}
#include<iostream>
using namespace std;
main(){


float charge;
float time;
float current;
cout<<"Enter the charge (Q) in Coulombs: ";
cin>>charge;
cout<<"Enter the time (t) in seconds: ";
cin>>time;
current=charge/time;
cout<<"The current (I) is: "<<current<<" Amperes";
}
#include<iostream>
using namespace std;
main(){

string name;
float matric;
float inter;
float ecat;
float aggregate;
cout<<"Enter the student's name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>matric;
cout<<"Enter intermediate marks (out of 550): ";
cin>>inter;
cout<<"Enter Ecat marks (out of 400): ";
cin>>ecat;
aggregate=(ecat/400*50)+(matric/1100*10)+(inter/510*40);

cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}
#include<iostream>
using namespace std;
main(){
double mbs;
double bits;
cout<<"Enter the size in megabytes (MB): ";
cin>>mbs;
bits=mbs*1024*1024*8;
cout<<mbs<<" MB is equivalent to "<<bits<<" bits.";
}
#include<iostream>
using namespace std;
main(){

int hours;
int seconds;
cout<<"Enter the number of hours: ";
cin>>hours;
seconds=hours*3600;
cout<<hours<<" hours is equivalent to "<<seconds<<" seconds.";
}
#include<iostream>
using namespace std;
main(){

float volt;
float amp;
float power;
cout<<"Enter voltage (in volts): ";
cin>>volt;
cout<<"Enter current (in amperes): ";
cin>>amp;
power=volt*amp;
cout<<"The power is "<<power<<" watts.";
}
#include<iostream>
using namespace std;
main()
{

int years;
int days;
cout<<"Enter your age in years: ";
cin>> years;
days=365*years;
cout<<"Your age in days is approximately "<<days<<" days.";
}
#include<iostream>
using namespace std;
main()
{
string TeamName;
int wins;
int draws;
int losses;
cout<<"Enter the name of the cricket team: ";
cin>>TeamName;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>losses;
int points=wins*3+draws*1;
cout<<TeamName<<" has obtained "<<points<<" points in the Asia Cup tournament.";
}
#include<iostream>
using namespace std;
main()
{
int Current_population;
int Births_per_month;
int Population_after_three_decades;
cout<<"Enter the current world population: ";
cin>>Current_population;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>Births_per_month;
Population_after_three_decades=Current_population+(Births_per_month*12*30);
cout<<"The population in three decades will be: "<<Population_after_three_decades;
}
#include<iostream>
#include<string>
using namespace std;
void addition(float num1, float num2);
void subtraction(float num1, float num2);
void division(float num1, float num2);
void multiplication(float num1, float num2);
main()
{
float num1;
float num2;
char op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if (op == '+')
{
addition(num1, num2);
}
if (op=='-')
{
subtraction(num1, num2);
}
if(op=='*')
{
multiplication(num1, num2);
}
if (op=='/')
{
division(num1,  num2);
}
}
void addition(float num1, float num2)
{
float sum ;
sum=num1 + num2;
cout<<"Addition: "<<sum;
}
void subtraction(float num1, float num2)
{
float sub;
sub=num1 - num2;
cout<<"Subtraction: "<<sub;
}
void multiplication(float num1, float num2)
{
float mul;
mul=num1*num2;
cout<<"Multiplication: "<<mul;
}
void division(float num1, float num2)
{
float div;
div=num1/num2;
cout<<"Division: "<<div;
}
#include<iostream>
using namespace std;
void Stickers(int sides);
main ()
{
int sides;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>sides;
Stickers(sides);
}
void Stickers(int sides)
{
int stickers;
stickers=sides*sides*6;
cout<<"Number of stickers needed: "<<stickers;
}
#include<iostream>
using namespace std;
void convert(float inches);
main()
{
float inch;
float feet;
cout<<"Enter the measurement in inches: ";
cin>>inch;
convert(inch);
}
void convert(float inch)
{
float feet;
feet=inch/12;
cout<<"Equivalent in feet: "<<feet;
}
#include<iostream>
using namespace std;
void fuel(float distance)
{
	float fuel;
	
	fuel=distance*10;
	if(fuel>=100)
	{
	cout<<"Fuel needed: "<<fuel;
	}
	else
	{
	cout<<Fuel needed: 100";
	}

}
main()
{
float fuel;
float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}
#include<iostream>
using namespace std;
void Vote(int age);
main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	Vote(age);
}
void Vote(int age)
{
	if(age>=18)
	{
	cout<<"You are eligible to vote.";
	}
	if(age<18)
	{
	cout<<"You are not eligible to vote.";
	}
}
#include<iostream>
using namespace std;
void Result(int marks);
main()
{
	int marks;
	cout<<"Enter your score: ";
	cin>>marks;
	Result(marks);
}
void Result(int marks)
{
	if(marks>50)
        {
	cout<<"Pass";
	}
	if(marks<=50)
	{
	cout<<"Fail";
	}
} 
#include<iostream>
using namespace std;
void evenOrOdd(int num);
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	evenOrOdd(num);
}
void evenOrOdd(int num)
{
	if(num%2==0)
	{
	cout<<"Number "<<num<<" is even";
	}
	if(num%2==1)
	{
	cout<<"Number "<<num<<" is odd";
	}
}
#include<iostream>
using namespace std;

void calculatePayableAmount(string day, float purchase);


main()
{
	string day;
	float purchase;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>purchase;
	calculatePayableAmount(day,purchase);
}
void calculatePayableAmount(string day, float purchase)
{
	float discount;
	if(day == "Sunday")
	{
	discount=(purchase)*(0.1);
	purchase=purchase-discount;	
	cout<<"Payable Amount: $"<<purchase;
	}
	else
	{
	cout<<"Payable Amount: $"<<purchase;
	}
}
#include<iostream>
using namespace std;
void calculateFuel(float distance);
main()
{ 
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	calculateFuel(distance);
}
void calculateFuel(float distance)
{
	float fuel=10*distance;
	if(fuel>=100)
	{
	cout<<"Fuel needed: "<<fuel;
	}
	if(fuel<100)
	{
	cout<<"Fuel needed: 100";
	}
}
#include<iostream>
using namespace std;
main(){
int SidesOfPolygon;
int SumOfInternalAngles;
cout<<"Enter the number of sides of the polygon: ";
cin>>SidesOfPolygon;
SumOfInternalAngles=(SidesOfPolygon-2)*180;
cout<<"The sum of internal angles of a "<<SidesOfPolygon<<"-sided polygon is: "<<SumOfInternalAngles<<" degrees";
}
#include<iostream>
using namespace std;
main(){
int minutes;
int frames;
cout<<"Number of Minutes: ";
cin>>minutes;
cout<<"Frames per Second: ";
cin>>frames;
int total=frames*60*minutes;
cout<<"Total Number of Frames: "<<total;
} 
#include<iostream>
using namespace std;
main(){

float InitialVelocity;
float Acceleration;
float time;
cout<<"Enter Initial Velocity (m/s): ";
cin>>InitialVelocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>Acceleration;
cout<<"Enter Time (s): ";
cin>>time;
float FinalVelocity=Acceleration*time+InitialVelocity;
cout<<"Final Velocity (m/s): "<<FinalVelocity;
}
#include<iostream>
using namespace std;
main(){
float ImposterCount;
float PlayerCount;
cout<<"Enter Imposter Count: ";
cin>>ImposterCount;
cout<<"Enter Player Count: ";
cin>>PlayerCount;
float ChanceOfBeingImposter=100* (ImposterCount/PlayerCount);
cout<<"Chance of being an imposter: "<<ChanceOfBeingImposter<<"%";
}
#include<iostream>
using namespace std;
main(){
string Name;
float TargetWeightLoss;
cout<<"Enter the Name of the Person: ";
cin>>Name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>TargetWeightLoss;
float Days=15*TargetWeightLoss;
cout<<Name<<" will need "<<Days<<" days to lose "<<TargetWeightLoss<<" kg of weight by following the doctor's suggestions";
}
#include<iostream>
using namespace std;
main(){
int SizeOfFertilizerBag;
int CostOfBag;
int AreaOfBag;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>SizeOfFertilizerBag;
cout<<"Enter the cost of the bag: $";
cin>>CostOfBag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>AreaOfBag;
int CostPerPound=CostOfBag/SizeOfFertilizerBag;
int CostPerSquareFoot=CostOfBag/AreaOfBag;
cout<<"Cost of fertilizer per pound: $"<<CostPerPound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<CostPerSquareFoot; 
}
#include<iostream>
using namespace std;
main()
{
string movie;
int AdultTicket;
int ChildTicket;
int AdultSold;
int ChildSold;
float PercentageCharity;
cout<<"Enter the movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>AdultTicket;
cout<<"Enter the child ticket price: $";
cin>>ChildTicket;
cout<<"Enter the number of adult tickets sold: ";
cin>>AdultSold;
cout<<"Enter the number of child tickets sold: ";
cin>>ChildSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>PercentageCharity;
float TotalAmount=(AdultTicket*AdultSold)+(ChildTicket*ChildSold);
float donation=(TotalAmount/100)*PercentageCharity;
int RemainingAmount=TotalAmount-donation;
cout<<endl;
cout<<"Movie: "<<movie<<endl;
cout<<"Total amount generated from ticket sales: $"<<TotalAmount<<endl;
cout<<"Donation to charity ("<<PercentageCharity<<"%): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<RemainingAmount<<endl;
}
#include<iostream>
using namespace std;
main(){
float vgprinkg;
float frprinkg;
int kgsOfVg;
int kgsOfFr;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vgprinkg;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>frprinkg;
cout<<"Enter total kilograms of vegetables: ";
cin>>kgsOfVg;
cout<<"Enter total kilograms of fruits: ";
cin>>kgsOfFr;
float cearning=(vgprinkg*kgsOfVg)+(frprinkg*kgsOfFr);
float rearning=cearning/1.94;
cout<<"Total earnings in Rupees (Rps): "<<rearning;
}
#include<iostream>
using namespace std;
main(){
int num;
cout<<"Enter a 4-digit number: ";
cin>>num;
int four=num%10;
int three=(num/10)%10;
int two=(num/100)%10;
int one=(num/1000)%10;
int sum=four+three+two+one;
cout<<"Sum of the individual digits: "<<sum;
}
#include<iostream>
using namespace std;
main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
cout<<"Number 1: ";
cin>>n1;
cout<<"Number 2: ";
cin>>n2;
cout<<"Number 3: ";
cin>>n3;
cout<<"Number 4: ";
cin>>n4;
cout<<"Number 5: ";
cin>>n5;
cout<<"Number 6: ";
cin>>n6;
cout<<"Number 7: ";
cin>>n7;
cout<<"Number 8: ";
cin>>n8;
cout<<"Number 9: ";
cin>>n9;
cout<<"Number 10: ";
cin>>n10;
cout<<"Number 11: ";
cin>>n11;
cout<<"Number 12: ";
cin>>n12;
cout<<"Number 13: ";
cin>>n13;
cout<<"Number 14: ";
cin>>n14;
cout<<"Number 15: ";
cin>>n15;
int n16=n1+n2+n3+n4+n5;
int n17=n6*n7*n8*n9*n10;
int n18=n11-n12-n13-n14-n15;
int result=n16+n17-n18;
cout<<"The final result is: "<<result;
}
#include<iostream>
using namespace std;
main()
{
int age;
int moved;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>moved;
int average=age/(moved+1);
cout<<"Average number of years lived in the same house: "<<average;
}
#include<iostream>
using namespace std;
main(){

int num,width,height;
cout<<"Number of square meters you can paint: ";
cin>>num;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
int total=num/(height*width);
cout<<"Number of walls you can paint: "<<total;
}
#include<iostream>
using namespace std;
void IsEqual(int x, int y);
main()
{
	int x,y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	IsEqual(x,y);
}
void IsEqual(int x, int y)
{
	if(x==y)
	{
	cout<<"true";
	}
	else
	{
	cout<<"false";
	}
}	
#include<iostream>
using namespace std;
void Reverse(string x);
main()
{
	string x;
	cout<<"Enter 'true' or 'false': ";
	cin>>x;
	Reverse(x);
}
void Reverse(string x)
{
	if(x=="true")
	{
	cout<<"false";
	}
	else
	{
	cout<<"true";
	}
}
#include<iostream>
using namespace std;
void discount(float amount,string country);
main()
{
	string country;
	float amount;
	cout<<"Enter the country's name: ";
	cin>>country;
	cout<<"Enter the ticket price in dollars: $";
	cin>>amount;
	discount(amount,country);
}
void discount(float amount,string country)
{
	float discoun;
	if(country == "Pakistan")
	{
	discoun=(amount)*0.05;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "Ireland")
	{
	discoun=(amount)*0.10;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "India")
	{
	discoun=(amount)*0.20;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "England")
	{
	discoun=(amount)*0.30;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "Canada")
	{
	discoun=(amount)*0.45;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
}
#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	checkSpeed(speed);
}
void checkSpeed(int speed)
{
	if(speed>100)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
	else
	{
	cout<<"Perfect! You're going good.";
	}
}
#include<iostream>
using namespace std;
void possibleBonus(int a, int b);
main()
{
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;
	possibleBonus(a,b);
}
void possibleBonus(int a, int b)
{
	if(b-a<=6)
	{
	cout<<"true";
	}
	else
	{
	cout<<"false";
	}
}
#include<iostream>
using namespace std;
void longestTime(int h, int m);
main()
{
	int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	longestTime(h,m);
}
void longestTime(int h, int m)
{
	if(h*60>m)
	{
	cout<<h;
	}
	else
	{
	cout<<m;
	}
}
#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
	int red,white,tulip;
	cout<<"Red Rose: ";
	cin>>red;
	cout<<"White Rose: ";
	cin>>white;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(red,white,tulip);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
	float prRed=redRose*2.00;
	float prWhite=whiteRose*4.10;
	float prTulip=tulip*2.50;
	float price=prRed+prWhite+prTulip;
	cout<<"Original Price: $"<<price<<endl;
	if(price>200)
	{
	price=price-(price*0.2);
	cout<<"Price after Discount: $"<<price;
	}
	else
	{
	cout<<"No discount applied.";
	}
}
#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingDays=365-holidays;
	int timeForGames=(workingDays*63)+(holidays*127);
	int difference=30000-timeForGames;
	int hours=(difference/60);
	int minutes=difference-(hours*60);
	if(difference>0)
	{
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
	}
	else
	{
	hours=(-1)*(hours);
	minutes=(-1)*(minutes);
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes for play";
	}
}
	
#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
{
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
	int sheets=tp*500;
	int sheetsPerDay=57*people;
	int days=sheets/sheetsPerDay ;
	if(days>=14)
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
	else
	{	
	cout<<"Your TP will only last "<<days<<" days, buy more!";
	}
}	 	