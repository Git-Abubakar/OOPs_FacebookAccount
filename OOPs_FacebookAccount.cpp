#include <iostream>
using namespace std;

const int MAX_NUMBER = 500;

class FacebookAccount{
    //bio data
    string name;
    string email;
    string password;
    string DOB;
    string contactNumber;
    char gender;
    //friends informationn
    int no_of_friends;
    string friendList[MAX_NUMBER];
    //posts data
    int no_of_posts;
    string postList[MAX_NUMBER];
    //photos data
    int no_of_pics;
    //about
    string bio;
public:
    FacebookAccount(string n, string e, string p, string d, string c, char g){
        name = n;
        email = e;
        password = p;
        DOB = d;
        contactNumber = c;
        gender = g;

        no_of_friends = 0;
        no_of_posts = 0;
        no_of_pics = 0;
        bio = "";
    }

    void ChangePassword(string prevPassword, string newPassword){
        if(password == prevPassword){
            password = newPassword;
            cout << "Password is changed!" << endl;
        }
        else
            cout << "You entered incorrect password!!" << endl;
    }

    void Post(string post){
        postList[no_of_posts] = post;
        no_of_posts++;
    }

    void DisplayPosts(){
        cout << "\nNo of post of user are: " << no_of_posts << endl;
        for(int i = 0; i < no_of_posts; i++){
            cout << postList[i] << endl;
        }
    }
};

int main(){
    FacebookAccount FA1("abubakar", "abubakar@gmail.com", "123abc", "12/12/2020", "03062345643" ,'F');
    FA1.ChangePassword("123abc", "abc123");
    FA1.Post("The greatest glory in living lies not in never falling, but in rising every time we fall. -Nelson Mandela");
    FA1.Post("The future belongs to those who believe in the beauty of their dreams. -Eleanor Roosevelt");
    FA1.Post("Be yourself; everyone else is already taken. -Oscar Wilde");

    FA1.DisplayPosts();
}