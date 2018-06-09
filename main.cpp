// >> Name : Ehab Fawzy Ibrahim
// >> mail : ehab1571999@yahoo.com
// >> Encryption Project ( " Ten Difference Method " )
// >> Assignment 2 ( CS112 Course )
// >> 04 - March - 2018
// >> C++ Programming Language

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

string Integer_TO_String( int x ){
    string y = "";
    string z = "0123456789";
    if ( x == 0 ){ y = "0"; return y; }
    while ( x != 0 ){
        int mod = x % 10;
        x /= 10;
        for ( int i = 0; i < 10; i++ ){
            if ( mod == i ){ y = z[i] + y; break; }
        }
    }
    return y;
}

int String_TO_Integer( string x ){
    int num = 0;
    string z = "0123456789";
    int len = x.length();
    int pw = len-1;
    for ( int i = 0; i < len; i++ ){
        for ( int j = 0; j < 10; j++ ){
            if ( x[i] == z[j] ){
                num += j * powl(10,pw);
                pw--;
                break;
            }
        }
    }
    return num;
}

string Decimal_To_Binary( int x ){
    string binary = "";
    int rem = 0;
    while ( x != 0 ){
        rem = x % 2;
        x  /= 2;
        if ( rem == 1 ){ binary = "1" + binary; }
        else { binary = "0" + binary; }
    }
    for ( int i = binary.length(); i < 6; ++i ){ binary = "0" + binary; }
    return binary;
}

int Binary_To_Decemal( string x ){
    int len = x.length()-1 , sum = 0;
    for ( int i = len , pw = 0;   i > -1;   pw++ , --i ){
        if ( x[i] == '1' ){ sum += pow( 2 , pw ); }
    }
    return sum;
}

string Binary_To_Hexa( string x ){
    string BTX_mess = "" , txt = "" , txt2 = "";
    int num1 = 0 , num2 = 0;
    txt2 += x[0]; txt2 += x[1];
    for ( int i = 2; i < 6; i++ ){ txt += x[i]; }
    num1 = Binary_To_Decemal(txt);
    num2 = Binary_To_Decemal(txt2);
    txt = Integer_TO_String(num1);
    txt2 = Integer_TO_String(num2);
    if ( txt == "10" ){ txt = "A"; }
    else if ( txt == "11" ){ txt = "B"; }
    else if ( txt == "12" ){ txt = "C"; }
    else if ( txt == "13" ){ txt = "D"; }
    else if ( txt == "14" ){ txt = "E"; }
    else if ( txt == "15" ){ txt = "F"; }
    BTX_mess += txt2;    BTX_mess += txt;

    return BTX_mess;
}

string Hexa_To_Binary( string x ){
    string HTB_mess = "" , txt = "" , txt2 = "";
    txt = x[0]; txt2 = x[1];
    if ( txt2 == "A" ){ txt2 = "10"; }
    else if ( txt2 == "B" ){ txt2 = "11"; }
    else if ( txt2 == "C" ){ txt2 = "12"; }
    else if ( txt2 == "D" ){ txt2 = "13"; }
    else if ( txt2 == "E" ){ txt2 = "14"; }
    else if ( txt2 == "F" ){ txt2 = "15"; }

    txt  = Decimal_To_Binary( String_TO_Integer(txt) );
    txt2 = Decimal_To_Binary( String_TO_Integer(txt2) );
    for ( int i = 3; i < 6; i++ ){ HTB_mess += txt[i]; }
    for ( int i = 2; i < 6; i++ ){ HTB_mess += txt2[i]; }

    return HTB_mess;
}

string Baconian_Cipher_Encryption( string x ){
    string BCE_mess = "";
    for ( int i = 0; i < x.length(); ++i ){
        if ( x[i] == '1' ){ BCE_mess += "b"; }
        else{ BCE_mess += "a"; }
    }
    return BCE_mess;
}

string Baconian_Cipher_Decryption( string x ){
    string BCD_mess = "";
    for ( int i = 0; i < x.length(); ++i ){
        if ( x[i] == 'a' ){ BCD_mess += "0"; }
        else{ BCD_mess += "1"; }
    }

    return BCD_mess;
}

string Delete_Spaces( string x ){
    string DS_mess = "";
    for ( int i = 0; i < x.length(); ++i ){
        if ( x[i] != ' ' ){ DS_mess += x[i]; }
    }
    return DS_mess;
}

string Small_To_Capital( string x ){

    string STC_mess = "";
    char ascci;

    for( int i = 0; i < x.length(); ++i ){
        ascci = x[i];
        if ( ascci >= 97 && ascci <= 122 ){ ascci -= 32; }
        STC_mess += (char)ascci;
    }
    return STC_mess;
}

string Capital_TO_Small( string x ){
    string CTS_mess = "";
    char ascci;

    for( int i = 0; i < x.length(); ++i ){
        ascci = x[i];
        if ( ascci >= 65 && ascci <= 90 ){ ascci += 32; }
        CTS_mess += (char)ascci;
    }
    return CTS_mess;
}

bool Check_For_Repetition( string x ){
    bool CFI_Check = false;
    for ( int i = 0; i < x.length(); i++ ){
        for ( int k = i+1; k < x.length(); k++ ){
            if ( x[i] == x[k] ){ CFI_Check = true; break;}
        }
        if ( CFI_Check == true ){ break; }
    }
    return CFI_Check;
}


int main()
{
    while ( true ){
        // Declaration Scope
        // Global Variables >>
        int choice = 0 , ascci = 0, steps = 0, col = 0, row = 0;
        string word = "" , edit = "" , ask = "" , txt = "" ,secret_key = "", direction = "", END = "";
        char letter;
        bool check = false;

        // >> Method 1 -------------
        int counter = 0 , lock = 0;
        //--------------------------
        // >> Method 2 -------------
        int xor_Logic = 0;
        char skey;
        string cipher = "";
        //--------------------------
        // >> Method 3 -------------
        int a = 0, b = 0 , c = 1;
        //--------------------------
        // >> Method 4 -------------
        //--------------------------
        // >> Method 5 -------------
        //--------------------------
        // >> Method 6 -------------
        //--------------------------
        // >> Method 7 -------------
        string Copy1 = "" , Copy2 = "" , binary = "" , cut = "" ;
        int rem = 0 , trans = 0;
        //--------------------------
        // >> Method 8 -------------
        char arr[100][100] = {};
        int key = 0, index = 0;
        //--------------------------
        // >> Method 9 -------------

        char alphabet [6][6] = {{'-','1','2','3','4','5'},{'1','a','b','c','d','e'},{'2','f','g','h','i','k'},{'3','l','m','n','o','p'},{'4','q','r','s','t','u'},{'5','v','w','x','y','z'}};
        const string w = "99";
        const string space = "90";
        //--------------------------
        // >> Method 10 ------------
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        string lower_alphabet = "abcdefghijklmnopqrstuvwxyz";
        string upper_alphabet = Small_To_Capital( lower_alphabet );

        string lower_alphabet_key = "";
        string upper_alphabet_key = "";

        int position = 0;
        //--------------------------

        cout << "Press ( 1  )   >>   Morse Code"                 << endl;
        cout << "Press ( 2  )   >>   XOR Cipher"                 << endl;
        cout << "Press ( 3  )   >>   Affine Cipher"              << endl;
        cout << "Press ( 4  )   >>   Caesar Cipher"              << endl;
        cout << "Press ( 5  )   >>   Atbash Cipher"              << endl;
        cout << "Press ( 6  )   >>   ROT13  Cipher"              << endl;
        cout << "Press ( 7  )   >>   Baconian Cipher"            << endl;
        cout << "Press ( 8  )   >>   Rail-fence Cipher"          << endl;
        cout << "Press ( 9  )   >>   Polybius Square Cipher"     << endl;
        cout << "Press ( 10 )   >>   Simple Substitution Cipher" << endl;

        // Check Number of Method
        while (true){
            cout << "\nEnter Number of Method : ";
            cin >> choice;
            if ( choice < 1 || choice > 10 ){ cout << "Your input should be in range ( 1 , 9 )\n"; }
            else{ break; }
        }

        // Check Number of Choice
        while (true){
            cout << "\nIf You Want to Encryption >> press ( 1 )";
            cout << "\nIf You Want to Decryption >> press ( 2 )\n";
            cout << "\nYour Choice IS : ";
            cin  >> ask;
            if ( ask == "1" || ask == "2" ){ break; }
        }

        cin.ignore();
        // Input All Data
        while ( true ){

            cout << "Enter Message  : \n";
            getline ( cin , word );
            if ( choice == 2 && ask == "2" ){
                if ( word.length()%2 == 0 ){ break; }
                cout << "Invalid Input" << endl;
            }
            else{ break; }
        }

        // Methods Operation
        if      (choice == 1 ){
            vector< pair<char,string> >ED_data(36);
            // My Encryption Data
            {
            ED_data[0 ].first = 'A';  ED_data[0 ].second = ".-";
            ED_data[1 ].first = 'B';  ED_data[1 ].second = "-...";
            ED_data[2 ].first = 'C';  ED_data[2 ].second = "-.-.";
            ED_data[3 ].first = 'D';  ED_data[3 ].second = "-..";
            ED_data[4 ].first = 'E';  ED_data[4 ].second = ".";
            ED_data[5 ].first = 'F';  ED_data[5 ].second = "..-.";
            ED_data[6 ].first = 'G';  ED_data[6 ].second = "--.";
            ED_data[7 ].first = 'H';  ED_data[7 ].second = "....";
            ED_data[8 ].first = 'I';  ED_data[8 ].second = "..";
            ED_data[9 ].first = 'J';  ED_data[9 ].second = ".---";
            ED_data[10].first = 'K';  ED_data[10].second = "-.-";
            ED_data[11].first = 'L';  ED_data[11].second = ".-..";
            ED_data[12].first = 'M';  ED_data[12].second = "--";
            ED_data[13].first = 'N';  ED_data[13].second = "-.";
            ED_data[14].first = 'O';  ED_data[14].second = "---";
            ED_data[15].first = 'P';  ED_data[15].second = ".--.";
            ED_data[16].first = 'Q';  ED_data[16].second = "--.-";
            ED_data[17].first = 'R';  ED_data[17].second = ".-.";
            ED_data[18].first = 'S';  ED_data[18].second = "...";
            ED_data[19].first = 'T';  ED_data[19].second = "-";
            ED_data[20].first = 'U';  ED_data[20].second = "..-";
            ED_data[21].first = 'V';  ED_data[21].second = "...-";
            ED_data[22].first = 'W';  ED_data[22].second = ".--";
            ED_data[23].first = 'X';  ED_data[23].second = "-..-";
            ED_data[24].first = 'Y';  ED_data[24].second = "-.--";
            ED_data[25].first = 'Z';  ED_data[25].second = "--..";
            ED_data[26].first = '1';  ED_data[26].second = ".----";
            ED_data[27].first = '2';  ED_data[27].second = "..---";
            ED_data[28].first = '3';  ED_data[28].second = "...--";
            ED_data[29].first = '4';  ED_data[29].second = "....-";
            ED_data[30].first = '5';  ED_data[30].second = ".....";
            ED_data[31].first = '6';  ED_data[31].second = "-....";
            ED_data[32].first = '7';  ED_data[32].second = "--...";
            ED_data[33].first = '8';  ED_data[33].second = "---..";
            ED_data[34].first = '9';  ED_data[34].second = "----.";
            ED_data[35].first = '0';  ED_data[35].second = "-----";
            }

            if ( ask == "1" ){

                word = Small_To_Capital(word);

                for ( int i = 0; i < word.length(); ++i ){
                    if ( word[i] == ' ' ){ edit += "  "; continue; }
                    for ( int k = 0; k < 36; k++ ){
                        if ( word[i] == ED_data[k].first ){ edit += ED_data[k].second; edit += " "; break; }
                    }
                }
            }

            else if ( ask == "2" ){
                //cout << (int)word[0];
                int counter = 0 , lock = 0;
                string txt = "";
                while( counter < word.length() ){
                    while ( ( (int)word[counter] >= 33 && (int)word[counter] <= 127 ) ){
                        txt += word[counter];
                        counter += 1;
                        if ( counter == word.length() ){ break; }
                    }


                    for ( int k = 0; k < 36; k++ ){
                        if ( ED_data[k].second == txt ){ edit += ED_data[k].first; break; }
                    }

                    if ( word[counter] == ' ' && word[counter+1] == ' ' && word[counter+2] == ' ' ){
                        edit += " ";
                        counter += 2;
                    }
                    else{ counter += 1; }
                    txt = "";

                }
            }
        }
        else if (choice == 2 ){

            while ( true ){
                cout << "\nEnter Your Private Key : ";
                cin  >> skey;
                if ( (skey >= 65 && skey <= 90) || (skey >= 97 && skey <= 122) ){ break; }
                cout << "Invalid Input " << endl;
            }

            word = Delete_Spaces( word );

            if ( ask == "1" ){
                for ( int i = 0; i < word.length(); i++ ){
                    letter    = word[i];
                    ascci     = (int)letter;
                    xor_Logic = ( (int)letter ^ (int)skey );
                    txt       = Binary_To_Hexa( Decimal_To_Binary( xor_Logic ) );
                    edit     += txt;
                    cipher   += (char)xor_Logic;
                }
                //cout << endl;
                //cout << "Cipher is : " << cipher;
            }
            else{
                for ( int i = 0; i < word.length(); i += 2 ){
                    txt += word[i]; txt += word[i+1];
                    if ( txt == "20" ){ edit += " "; txt = "" ; continue; }
                    xor_Logic = Binary_To_Decemal( Hexa_To_Binary( txt ) );
                    xor_Logic = xor_Logic ^ int(skey);
                    edit += (char)xor_Logic;
                    txt = "";
                }
            }
        }
        else if (choice == 3 ){
            while (true){
                cout << "Enter A : ";
                cin  >> a;
                cout << "Enter B : ";
                cin  >> b;
                cout << "Enter C : ";
                cin  >> c;
                if ( (a * c) % 26 == 1 ){ break; }
                cout << "Invalied Input" << endl;
            }
            word = Small_To_Capital( word );

            if ( ask == "1" ){
                for ( int i = 0; i < word.length(); i++ ){
                    letter =  word[i];
                    ascci  = ( int )letter;
                    if ( ascci >= 65 && ascci <= 90 ){
                        ascci  = ( ( a * (ascci - 65) ) + b ) % 26;
                        ascci += 65;
                        edit += (char)ascci;
                    }
                    else{ edit += word[i]; }
                }
            }
            else{
                for ( int i = 0; i < word.length(); i++ ){
                    letter = word[i];
                    ascci  = ( int )letter;
                    if ( ascci >= 65 && ascci <= 90 ){
                        ascci  = c * ( ascci - b - 65 );
                        while ( ascci < 0 ){ ascci += 26; }
                        ascci %= 26;
                        ascci += 65;
                        edit += (char)ascci;
                    }
                    else{ edit += word[i]; }
                }
            }

        }
        else if (choice == 4 ){

            while ( true ){
                cout << "\nEnter Direction ( L || R ) : ";
                cin  >> direction;
                if ( direction == "l" || direction == "L" || direction == "r" || direction == "R" ){ break; }
                else{ cout << "\nInvalid Input \n" << endl; }
            }
            while ( true ){
                cout << "\nEnter Number Of Steps : ";
                cin  >> steps;
                if ( steps < 0 ){ cout << "\nInvalid Input \n" << endl; }
                else if ( steps == 0 ){ cout << "\nInvalid Input >> No Change Will Be Done \n" << endl; }
                else{ break; }
            }
            steps %= 26;

            if ( direction == "l" || direction == "L" ){ steps *= -1; }

            if ( ask == "2" ){ steps *= -1; }

            for ( int i = 0; i < word.length(); i++ ){
                letter = word[i];
                ascci  = ( int )letter; // ascci code
                if ( ascci >= 65 && ascci <= 90 ){
                    ascci += steps;
                    if ( ascci > 90){ ascci -= 26; }
                    else if ( ascci < 65 ){ ascci += 26; }
                }
                else if ( ascci >= 97 && ascci <= 122 ){
                    ascci += steps;
                    if ( ascci  > 122 ){ ascci -= 26; }
                    else if ( ascci < 97 ){ ascci += 26; }
                }
                edit += (char)ascci;
            }
        }
        else if (choice == 5 ){

            cout << endl;
            for ( int i = 0; i < word.length() ; ++i ){

                letter = word[i];
                ascci = (int)letter;

                if ( ascci >= 65 and ascci <= 90 ){
                    edit += (char)( 90 - (ascci - 65) );
                }
                else if ( ascci >= 97 and ascci <= 122 ){
                    edit += (char)( 122 - (ascci - 97) );
                }
                else{
                    edit += word[i];
                }


            }

        }
        else if (choice == 6 ){
            steps = 13;

            if ( ask == "2" ){ steps *= -1; }

            for ( int i = 0; i < word.length(); i++ ){
                letter = word[i];
                ascci  = ( int )letter; // ascci code
                if ( ascci >= 65 && ascci <= 90 ){
                    ascci += steps;
                    if ( ascci > 90){ ascci -= 26; }
                    else if ( ascci < 65 ){ ascci += 26; }
                }
                else if ( ascci >= 97 && ascci <= 122 ){
                    ascci += steps;
                    if ( ascci  > 122 ){ ascci -= 26; }
                    else if ( ascci < 97 ){ ascci += 26; }
                }
                edit += (char)ascci;
            }
        }
        else if (choice == 7 ){

            cout << endl;

            if ( ask == "1" ){
                word = Delete_Spaces( word );

                for ( int i = 0; i < word.length(); ++i ){
                    letter = word[i];
                    ascci  = ( int )letter;

                    if ( ascci >= 65 && ascci <= 90 ){ ascci -= 65; }
                    else if ( ascci >= 97 && ascci <= 122 ){ ascci -= 97; }

                    binary = Decimal_To_Binary(ascci);
                    edit += Baconian_Cipher_Encryption( binary );

                }

            }
            else{
                Copy1 = word;
                word  = Delete_Spaces( word );

                for ( int i = 0; i < word.length(); i += 6 ){
                    cut = ""; binary = ""; trans = 0;

                    for ( int k = 0 ; k < 6; k++ ){ cut += word[i+k]; }

                    binary = Baconian_Cipher_Decryption( cut );
                    trans  = Binary_To_Decemal( binary );

                    if ( trans >= 0 and trans <= 25 ){ trans += 65; }
                    else{ trans += 97; }

                    edit  += (char)trans;

                }
                Copy2  = edit;

                edit = "";
                edit += Copy2[0];
                for ( int p1 = 1 , p2 = 6 ; p1 < Copy2.length(); p1++ , p2 += 7 ){
                    if ( Copy1[p2] == ' ' ){ edit +=  " "; edit += Copy2[p1]; }
                    else{ edit += Copy2[p1]; }
                }
            }

        }
        else if (choice == 8 ){
            // Delete Space
            word = Delete_Spaces( word );
            while ( true ){
                cout << endl;
                cout << "\n>> Enter Key :  ";
                cin  >> key;
                if ( key != 0 ){ break; }
            }
            key %= 100;

            if ( ask == "1" ){
                for ( int i = 0; i < key; i++ ){
                    for ( int j = 0; j < word.length(); j++ ){
                        arr[i][j] = '.';
                    }
                }
                for ( int i = 0; i < word.length(); i++ ){
                    arr[col][row] = word[i];
                    row++;
                    if ( check == false ){
                        col++;
                        if ( col == key-1 ){ check = true; }
                    }
                    else if ( check == true ){
                        col--;
                        if( col == 0 ){ check = false; }
                    }
                }
                for ( int i = 0; i < key; i++ ){
                    for ( int j = 0; j < word.length(); j++ ){
                        if ( arr[i][j] != '.' ){ edit += arr[i][j]; }
                    }
                }
            }
            else{
                for ( int i = 0; i < word.length(); i++ ){
                    arr[col][row] = '.';
                    row++;
                    if ( check == false ){
                        col++;
                        if ( col == key-1 ){ check = true; }
                    }
                    else if ( check == true ){
                        col--;
                        if( col == 0 ){ check = false; }
                    }
                }
                for ( int i = 0; i < key; i++ ){
                    for ( int j = 0; j < word.length(); j++ ){
                        if ( arr[i][j] == '.' ){ arr[i][j] = word[index]; index++; }
                    }
                }
                col = 0; row = 0; check = false;
                for ( int i = 0; i < word.length(); i++ ){
                    edit += arr[col][row];
                    row++;
                    if ( check == false ){
                        col++;
                        if ( col == key-1 ){ check = true; }
                    }
                    else if ( check == true ){
                        col--;
                        if( col == 0 ){ check = false; }
                    }
                }
            }
        }
        else if (choice == 9 ){
            // Notes
            cout << endl;
            cout << "NOTE : Any Thing Other Than Alphabet Will Be Delete When You Encrypt a Message" << endl;
            cout << "NOTE : Any Thing Other Than Numbers  Will Be Delete When You Decrypt a Message" << endl;
            cout << endl;

            // Make All Letter Small
            word = Capital_TO_Small( word );

            while ( true ){
                check = false;
                cout << "\nEnter Secret Key : ";
                cin  >> secret_key;
                if ( secret_key.length() != 5 ){ cout << "\nSecret Key Should Be Five Digit Only\n"; continue; }
                for ( int i = 0; i < secret_key.length(); i++ ){
                    if ( (int)secret_key[i] >= 48 && (int)secret_key[i] <= 56 ){ continue; }
                    else{ check = true; }
                }
                if ( check == true ){ cout << "\nSecret Key Should Be Only five Numbers From 1 To 8 \n"; }
                else if ( Check_For_Repetition(secret_key) == true ){ cout << "\nInvalid Input >> NO Repetition in Secret Key \n"; }
                else{ break; }
            }

            for ( int i = 1; i <= secret_key.length(); i++ ){
                alphabet[0][i] = secret_key[i-1];
                alphabet[i][0] = secret_key[i-1];
            }

            if ( ask == "1" ){
                // cipher operation
                for ( int i = 0; i < word.length(); i++ ){
                    row = 0, col = 0;
                    letter = word[i];
                    if ( letter == 'w' ){ edit += "99"; continue; }
                    if ( letter == ' ' ){ edit += "90"; continue; }
                    for ( int k = 1; k < 6 ; k++ ){
                        for ( int j = 1; j < 6; j++ ){
                            if ( alphabet[k][j] == letter ){ row = j; col = k; break; }
                        }
                    }
                    if ( col == 0 || row == 0 ){ continue; }
                    edit += alphabet[col][0];
                    edit += alphabet[0][row];
                }
            }

            else if ( ask == "2" ){
                // delete anything other than numbers
                while ( true ){
                    txt = "";
                    for ( int i = 0; i < word.length(); i++ ){
                        if ( (int)word[i] >= 48 && (int)word[i] <= 57 ){ txt += word[i]; }
                    }
                    if ( (txt.length() % 2 ) == 0 ){ break; }
                    cout << "\nInvalid Input |> This Message Lose Some Information <|\n";
                    return 0;
                }
                for ( int i = 0; i < txt.length(); i += 2 ){
                    row = 0 , col = 0;
                    for ( int k = 1; k < 6; k++ ){
                        if ( alphabet[0][k] == txt[i  ] ){ row = k;}
                        if ( alphabet[k][0] == txt[i+1] ){ col = k;}
                    }
                    if ( row == 0 && col == 0 && txt[i] == '9' && txt[i+1] == '9' ){ edit += "w"; continue; }
                    if ( row == 0 && col == 0 && txt[i] == '9' && txt[i+1] == '0' ){ edit += " "; continue; }
                    edit += alphabet[row][col];
                }
            }
        }
        else if (choice == 10){
            // Get Key And Make Check if this key is wrong
            while ( true ){
                check = false;

                cout << "Enter Secret Key : ";
                cin  >> secret_key;

                if ( secret_key.length() != 5  ){ cout << "\nSecret Ket Should Be Five Letter Only \n"; continue; }

                secret_key = Capital_TO_Small( secret_key );

                for ( int i = 0; i < secret_key.length(); i++ ){
                    if ( (int)secret_key[i] >= 97 && (int)secret_key[i] <= 122 ){ continue; }
                    else{ check = true; }
                }
                if ( check == true ){ cout << "\nSecret Key Should Be Alphabet Only \n"; }
                else{ break; }
            }

            // build Cipher Alphabet
            for ( int i = 0; i < secret_key.length(); i++ ){
                lower_alphabet_key += secret_key[i];
                ascci  = (int)secret_key[i] - 97;
                lower_alphabet[ ascci ] = '#';
            }

            for ( int i = 0; i < lower_alphabet.length(); i++ ){
                if ( lower_alphabet[i] != '#' ){ lower_alphabet_key += lower_alphabet[i]; }
            }

            lower_alphabet = alphabets;
            upper_alphabet_key = Small_To_Capital( lower_alphabet_key );


            if ( ask == "1" ){
                for ( int i = 0; i < word.length(); i++ ){
                    letter = word[i];
                    ascci  = (int)letter;
                    if ( ascci >= 65 && ascci <= 90 ){
                        ascci -= 65;
                        edit  += upper_alphabet_key[ascci];
                    }
                    else if ( ascci >= 97 && ascci <= 122 ){
                        ascci -= 97;
                        edit  += lower_alphabet_key[ascci];
                    }
                    else { edit += word[i]; }
                }
            }
            else if ( ask == "2" ){
                for ( int i = 0; i < word.length(); i++ ){
                    letter   = word[i];
                    ascci    = (int)letter;
                    position = 0;
                    if ( ascci >= 65 && ascci <= 90 ){
                        for ( int k = 0; k < upper_alphabet_key.length(); k++ ){
                            if ( upper_alphabet_key[k] == word[i] ){ break; }
                            position++;
                        }
                        edit += upper_alphabet[ position ];
                    }
                    else if ( ascci >= 97 && ascci <= 122 ){
                        for ( int k = 0; k < lower_alphabet_key.length(); k++ ){
                            if ( lower_alphabet_key[k] == word[i] ){ break; }
                            position++;
                        }
                        edit += lower_alphabet[ position ];
                    }
                    else {
                        edit += word[i];
                    }
                }
            }

        }

        // print result
        cout << endl;
        cout << "Result : \n";
        cout << edit;
        cout << endl;

        cout << endl;
        cout << "\n >>  If You Want to Make Another Operation Press 1, else Press Any Key " << endl;
        cout << " >>  Enter Choice : ";
        cin  >> END;
        cout << endl;
        if ( END != "1" ){ break; }
    }
    return 0;
}
