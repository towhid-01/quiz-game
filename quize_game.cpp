#include<ctime>
#include<bits/stdc++.h>
using namespace std;

string tolower(string& inputString){
    string result = inputString;
    for(char& c : result) {
        c = tolower(c);
    }
    return result;
}
void display();
void result();
void football();
void cricket();
    int wrong=0;
    int point =0;
    string name;

int main(){
    cout<<"Hello!!!"<<endl;
    cout<<endl;
    cout<<"Do you want to play? "<<endl;
    string yes_no;
    cin>>yes_no;

    string s=tolower(yes_no);
    if(s=="y")s="yes";

    if(s!="yes"){
        cout<<"\t\t\t\t\t__END__"<<endl;
        return 0;
    }
    cout<<"Enter Your Name : ";

    cin>>name;

    display();
}
void display(){
    system("cls");

    cout<<"\t\t\t Enter the number to select your category"<<endl;
    cout<<"1.\tFottball"<<endl;
    cout<<"2.\tCricket"<<endl;
    cout<<endl;
    cout<<"----->    ";
    int n;
    cin>>n;

    //cout<<"\t\tCorrect Answers = "<<point<<"\t\tWrong Answers = "<<wrong<<endl;
    if(n==1)football();
    else if(n==2)cricket();
}

void cricket(){

    system ("cls");
     //question 1

    cout<<"Question- 1 "<<endl;
    cout<<endl;
    cout<<"Who holds the record for the highest individual score in a Test innings? ";
    string ans1;
    char ch1;
    cin>>ch1;
    getline(cin, ans1);
    ans1=ch1+ans1;
    string s1=tolower(ans1);
    cout<<endl;
    if(s1!="brian lara"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 2

    cout<<"Question- 2 "<<endl;
    cout<<endl;
    cout<<"Which cricketer has played the most Test matches? ";
    string ans2;
    char ch2;
    cin>>ch2;
    getline(cin, ans2);
    ans2=ch2+ans2;
    string s2=tolower(ans2);
    cout<<endl;
    if(s2!="sachin tendulkar" && s2!="sachin"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;
        //question 3

    cout<<"Question- 3 "<<endl;
    cout<<endl;
    cout<<"Who is the youngest player ever to debut in Test cricket? ";
    string ans3;
    char ch3;
    cin>>ch3;
    getline(cin, ans3);
    ans3=ch3+ans3;
    string s3=tolower(ans3);
    cout<<endl;
    if(s3!="hasan raza" && s3!="hasan raja"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


            //question 4

    cout<<"Question- 4 "<<endl;
    cout<<endl;
    cout<<"Who was the first player to score a double century in ODI cricket? ";
    string ans4;
    char ch4;
    cin>>ch4;
    getline(cin, ans4);
    ans4=ch4+ans4;
    string s4=tolower(ans4);

    cout<<endl;
    if(s4!="sachin tendulkar" && s4!="sachin"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 5

    cout<<"Question- 5 "<<endl;
    cout<<endl;
    cout<<"Which team scored highest team total in an ODI match? ";
    string ans5;
    char ch5;
    cin>>ch5;
    getline(cin, ans5);
    ans5=ch5+ans5;
    string s5=tolower(ans5);

    cout<<endl;
    if(s5!="england"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 6

    cout<<"Question- 6 "<<endl;
    cout<<endl;
    cout<<"Who is the youngest cricketer to score a century in international cricket? ";
    string ans6;
    char ch6;
    cin>>ch6;
    getline(cin, ans6);
    ans6=ch6+ans6;
    string s6=tolower(ans6);

    cout<<endl;
    if(s6!="afridi" && s6!="shahid afridi"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 7

    cout<<"Question- 7 "<<endl;
    cout<<endl;
    cout<<"Who is the fastest bowler in the history of cricket? ";
    string ans7;
    char ch7;
    cin>>ch7;
    getline(cin, ans7);
    ans7=ch7+ans7;
    string s7=tolower(ans7);

    cout<<endl;
    if(s7!="shoaib akhtar"&& s7!="akhtar"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;

    }
    cout<<endl;
    cout<<endl;

    //question 8

    cout<<"Question- 8 "<<endl;
    cout<<endl;
    cout<<"Who has the most sixes in international cricket? ";
    string ans8;
    char ch8;
    cin>>ch8;
    getline(cin, ans8);
    ans8=ch8+ans8;
    string s8=tolower(ans8);

    cout<<endl;
    if(s8!="chris gayle" && s8!="chris" && s8!="gayle"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 9

    cout<<"Question- 9 "<<endl;
    cout<<endl;
    cout<<"Who has the most runs in T20I cricket? ";
    string ans9;
    char ch9;
    cin>>ch9;
    getline(cin, ans9);
    ans9=ch9+ans9;
    string s9=tolower(ans9);

    cout<<endl;
    if(s9!="virat kohli" && s9!="virat" && s9!= "kohli"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 10

    cout<<"Question- 10 "<<endl;
    cout<<endl;
    cout<<"Which team won the first cricket World Cup? ";
    string ans10;
    char ch10;
    cin>>ch10;
    getline(cin, ans10);
    ans10=ch10+ans10;
    string s10=tolower(ans10);

    cout<<endl;
    if(s10!="west indies" && s10!= "west" ){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 11

    cout<<"Question- 11 "<<endl;
    cout<<endl;
    cout<<"Who scored the first double century in a World Cup match? ";
    string ans11;
    char ch11;
    cin>>ch11;
    getline(cin, ans11);
    ans11=ch11+ans11;
    string s11=tolower(ans11);

    cout<<endl;
    if(s11!="martin guptil" && s11!="guptil" && s11!="martin" ){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 12

    cout<<"Question- 12 "<<endl;
    cout<<endl;
    cout<<" What players nickname is SOS (Son of Swampy)? ";
    string ans12;
    char ch12;
    cin>>ch12;
    getline(cin, ans12);
    ans12=ch12+ans12;
    string s12=tolower(ans12);

    cout<<endl;
    if(s12!="shaun mars" && s12!="mars"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 13

    cout<<"Question- 13 "<<endl;
    cout<<endl;
    cout<<"What is New Zealand cricketer Brendon McCullum nickname? ";
    string ans13;
    char ch13;
    cin>>ch13;
    getline(cin, ans13);
    ans13=ch13+ans13;
    string s13=tolower(ans13);

    cout<<endl;
    if(s13!="bazz"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 14

    cout<<"Question- 14 "<<endl;
    cout<<endl;
    cout<<"Which national team are called 'Baggy Greens'? ";
    string ans14;
    char ch14;
    cin>>ch14;
    getline(cin, ans14);
    ans14=ch14+ans14;
    string s14=tolower(ans14);

    cout<<endl;
    if(s14!="australia"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 15

    cout<<"Question- 15 "<<endl;
    cout<<endl;
    cout<<"Who Captained India to victory in the World Cup in 1983? ";
    string ans15;
    char ch15;
    cin>>ch15;
    getline(cin, ans15);
    ans15=ch15+ans15;
    string s15=tolower(ans15);

    cout<<endl;
    if(s15!="kapil dev"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    result();

}

void football(){

    //question 1

    cout<<"Question- 1 "<<endl;
    cout<<endl;
    cout<<"Who is the Bundesliga's all-time top goalscorer? ";
    string ans1;
    char ch1;
    cin>>ch1;
    getline(cin, ans1);
    ans1=ch1+ans1;
    string s1=tolower(ans1);
    cout<<endl;
    if(s1!="gerd muller"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;
    //question 2

    cout<<"Question- 2 "<<endl;
    cout<<endl;
    cout<<"Which Argentinian club did Lionel Messi play for as a youth? ";
    string ans2;
    char ch2;
    cin>>ch2;
    getline(cin, ans2);
    ans2=ch2+ans2;
    string s2=tolower(ans2);
    cout<<endl;
    if(s2!="old boys"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;
        //question 3

    cout<<"Question- 3 "<<endl;
    cout<<endl;
    cout<<"What is Juventu's nickname? ";
    string ans3;
    char ch3;
    cin>>ch3;
    getline(cin, ans3);
    ans3=ch3+ans3;
    string s3=tolower(ans3);
    cout<<endl;
    if(s3!="the old lady"){
        cout<<"Wrong!!!!";
        wrong++;
    }
    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


            //question 4

    cout<<"Question- 4 "<<endl;
    cout<<endl;
    cout<<"Which 2 countries hosted the 2002 FIFA World Cup? ";
    string ans4;
    char ch4;
    cin>>ch4;
    getline(cin, ans4);
    ans4=ch4+ans4;
    string s4=tolower(ans4);

    cout<<endl;
    if(s4!="south korea & japan" && s4!="south korea and japan"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 5

    cout<<"Question- 5 "<<endl;
    cout<<endl;
    cout<<"Which striker was the first to score more than 20 goals in the Premier League for 5 consecutive seasons? ";
    string ans5;
    char ch5;
    cin>>ch5;
    getline(cin, ans5);
    ans5=ch5+ans5;
    string s5=tolower(ans5);

    cout<<endl;
    if(s5!="thiery henry" && s5!="henry"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 6

    cout<<"Question- 6 "<<endl;
    cout<<endl;
    cout<<"Which English club was the first to win the European Cup twice? ";
    string ans6;
    char ch6;
    cin>>ch6;
    getline(cin, ans6);
    ans6=ch6+ans6;
    string s6=tolower(ans6);

    cout<<endl;
    if(s6!="liverpool" && s6!="the reds" && s6!="the red devils"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 7

    cout<<"Question- 7 "<<endl;
    cout<<endl;
    cout<<"Who was the first striker to score 100 Premier League goals for two different clubs? ";
    string ans7;
    char ch7;
    cin>>ch7;
    getline(cin, ans7);
    ans7=ch7+ans7;
    string s7=tolower(ans7);

    cout<<endl;
    if(s7!="alan shearer"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;

    }
    cout<<endl;
    cout<<endl;

    //question 8

    cout<<"Question- 8 "<<endl;
    cout<<endl;
    cout<<"In what football league does ‘The Beckham Rule’ apply? ";
    string ans8;
    char ch8;
    cin>>ch8;
    getline(cin, ans8);
    ans8=ch8+ans8;
    string s8=tolower(ans8);

    cout<<endl;
    if(s8!="mls"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 9

    cout<<"Question- 9 "<<endl;
    cout<<endl;
    cout<<"What is the Dutch Super cup also known as? ";
    string ans9;
    char ch9;
    cin>>ch9;
    getline(cin, ans9);
    ans9=ch9+ans9;
    string s9=tolower(ans9);

    cout<<endl;
    if(s9!="johan cruyff sheild"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 10

    cout<<"Question- 10 "<<endl;
    cout<<endl;
    cout<<"Who did Zinedine Zidane headbutt in the 2006 final? ";
    string ans10;
    char ch10;
    cin>>ch10;
    getline(cin, ans10);
    ans10=ch10+ans10;
    string s10=tolower(ans10);

    cout<<endl;
    if(s10!="marco materazzi" && s10!= "marco" && s10!="materazzi"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    //question 11

    cout<<"Question- 11 "<<endl;
    cout<<endl;
    cout<<"Who was the youngest manager to win the World Cup? ";
    string ans11;
    char ch11;
    cin>>ch11;
    getline(cin, ans11);
    ans11=ch11+ans11;
    string s11=tolower(ans11);

    cout<<endl;
    if(s11!="alberto suppici" ){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 12

    cout<<"Question- 12 "<<endl;
    cout<<endl;
    cout<<"Before Qatar 2022, how many nations have won the FIFA World Cup? ";
    string ans12;
    char ch12;
    cin>>ch12;
    getline(cin, ans12);
    ans12=ch12+ans12;
    string s12=tolower(ans12);

    cout<<endl;
    if(s12!="8" && s12!="eight"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 13

    cout<<"Question- 13 "<<endl;
    cout<<endl;
    cout<<"Which nation hosted the 1994 FIFA World Cup? ";
    string ans13;
    char ch13;
    cin>>ch13;
    getline(cin, ans13);
    ans13=ch13+ans13;
    string s13=tolower(ans13);

    cout<<endl;
    if(s13!="usa" && s13!="us" && s13!="america"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 14

    cout<<"Question- 14 "<<endl;
    cout<<endl;
    cout<<"Which sports brand has supplied every World Cup since 1970 with balls? ";
    string ans14;
    char ch14;
    cin>>ch14;
    getline(cin, ans14);
    ans14=ch14+ans14;
    string s14=tolower(ans14);

    cout<<endl;
    if(s14!="adidas"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;

    //question 15

    cout<<"Question- 15 "<<endl;
    cout<<endl;
    cout<<"Which nation was the first Asian country to reach the World Cup semi-finals? ";
    string ans15;
    char ch15;
    cin>>ch15;
    getline(cin, ans15);
    ans15=ch15+ans15;
    string s15=tolower(ans15);

    cout<<endl;
    if(s15!="south korea"){
        cout<<"Wrong!!!!";
        wrong++;
    }

    else{
        cout<<"Correct ";
        point++;
    }
    cout<<endl;
    cout<<endl;


    if(point<=5){
            cout<<"                                           Watch Football                                            "<<endl;
            cout<<endl;
    cout<<"                         Your score is too low to count"<<endl;
    return ;
    }
    cout<<endl;

    //display();
    result();
}


void result(){
    system("cls");
    cout<<"\t\t\tCorrect Answers = "<<point<<"\t\t\tWrong Answers = "<<wrong<<endl;
    cout<<endl;
    cout<<endl;
        if(point>=10 and point<=12){
        cout<<"                                           Man"<<endl;
    }
    else if(point>=13){
        cout<<"                                           Legend"<<endl;
    }
    else if(point<=9 and point>=6)cout<<"                                           Kid"<<endl;

    cout<<endl;

    cout<<name<<"   your total score = "<<point<<endl;

    getchar();

}
