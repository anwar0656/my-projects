#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    string user_1, signup, username_2, password_2, password_1, confirm_pass_2, text, check; // variables
    string admin_u = "admin", admin_pass_i = "1234"; // variables for admin portal
    string admin_pass;
    // variables to control mobile shop for admin
int T_nokia,P_nokia,T_android,P_android,T_apple,P_apple;

    cout << "\t \t Welcome to MAB shop " << endl;
    cout << "Sign In or Sign Up" << endl;
    cout << "For Sign Up, Enter 'Yes'" << endl;
    cout << "For Sign In, Enter 'signin'. If you are admin, just enter 'admin' for admin section." << endl;
    cin >> text;

    if (text == "admin") {
        string admin_i;
        cout << "Welcome to Sign In!" << endl;
        cout << "Enter Your admin Username" << endl;
        cin.ignore();
        getline(cin, admin_i);

        cout << "Enter Your admin password" << endl;
        getline(cin, admin_pass);

        if (admin_i == admin_u && admin_pass == admin_pass_i) {
            // cout << "Hello, admin!" << endl;
            for (int i = 1; i <= 50; i++) {
                cout << "*";
            }
            cout << endl;

        cout<<"\t\t Setup Your prizes"<<endl;
            cout << "Nokia" << endl;
            cout << "Total no: of phones are " << endl;
            cin>>T_nokia;
            cout << "Price of phone is:  Rs\n" << endl;
            cin>>P_nokia;
            cout << "Android" << endl;
            cout << "Total no: of phones are ." << endl;
            cin>>T_android;
            cout << "Price of phone is:  Rs\n" << endl;
            cin>>P_android;

            cout << "Apple" << endl;
            cout << "Total no: of phones are  " << endl;
            cin>>T_apple;
            cout << "Price of phone is:  Rs\n" << endl;
            cin>>P_apple;

            cout<<"\t\t Your new prizes are"<<endl;
            cout << "Nokia" << endl;
            cout << "Total no: of phones are " <<T_nokia << endl;
            cout << "Price of phone is: "<<P_nokia<<"Rs\n"<< endl;
            cout << "Android" << endl;
            cout << "Total no: of phones are " <<T_android << endl;
            cout << "Price of phone is: "<<P_android<<" Rs\n" << endl;
            cout << "Apple" << endl;
            cout << "Total no: of phones are "<<T_apple << endl;
            cout << "Price of phone is: "<<P_apple<<" Rs\n" << endl;







        } else {
            cout << "Your admin username or password is incorrect" << endl;
        }

    }

    else if (text == "signin") {
        cout << "Welcome to Sign In!" << endl;
        cout << "Enter Your Username" << endl;
        cin.ignore();
        getline(cin, user_1);
        cout << "Enter Your password" << endl;
        getline(cin, password_1);


        cout << "\t\tMenu" << endl;
        for (int i = 1; i <= 50; i++) {
            cout << "*";
        }
        cout << endl;


        cout<<"\t\t Your new prizes are"<<endl;
        cout << "Nokia" << endl;
        cout << "Total no: of phones are " <<T_nokia << endl;
        cout << "Price of phone is: "<<P_nokia<<"Rs\n"<< endl;
        cout << "Android" << endl;
        cout << "Total no: of phones are " <<T_android << endl;
        cout << "Price of phone is: "<<P_android<<" Rs\n" << endl;
        cout << "Apple" << endl;
        cout << "Total no: of phones are "<<T_apple << endl;
        cout << "Price of phone is: "<<P_apple<<" Rs\n" << endl;

    } else if (text == "signup" || text == "yes") {
        cout << "Do you want to sign up? (Y/N): ";
        cin >> signup;

        if (signup[0] == 'y' || signup[0] == 'Y') {
            cout << "Enter Your Username" << endl;
            cin.ignore(); // Clear newline
            getline(cin, username_2);
            cout << "Enter Your Password" << endl;
            getline(cin, password_2);
            cout << "Confirm Your Password" << endl;
            getline(cin, confirm_pass_2);

            if (password_2 == confirm_pass_2) {
                cout << "Congrats! You have signed up." << endl;
                cout << "Do you want to sign in? (Y/N): ";
                cin >> check;

                if (check == "yes" || check == "Yes") {
                    cout << "Enter Your Username" << endl;
                    cin.ignore(); // Clear newline
                    getline(cin, user_1);
                    cout << "Enter Your password" << endl;
                    getline(cin, password_1);

                    if (user_1 == username_2 && password_1 == password_2) {
                        cout << "\t \t \tMENU" << endl;
                        for (int i = 1; i <= 50; i++) {
                            cout << "*";
                        }
                        cout << endl;


                        cout<<"\t\t Your new prizes are"<<endl;
                        cout << "Nokia" << endl;
                        cout << "Total no: of phones are " <<T_nokia << endl;
                        cout << "Price of phone is: "<<P_nokia<<"Rs\n"<< endl;
                        cout << "Android" << endl;
                        cout << "Total no: of phones are " <<T_android << endl;
                        cout << "Price of phone is: "<<P_android<<" Rs\n" << endl;
                        cout << "Apple" << endl;
                        cout << "Total no: of phones are "<<T_apple << endl;
                        cout << "Price of phone is: "<<P_apple<<" Rs\n" << endl;

                    } else {
                        cout << "Username or Password is incorrect." << endl;
                    }
                } else {
                    cout << "You chose not to sign in." << endl;
                }
            } else {
                cout << "Your passwords do not match." << endl;
            }
        } else {
            cout << "You chose not to sign up." << endl;
        }
    } else {
        cout << "Enter a valid text." << endl;
    }

    return 0;
}
