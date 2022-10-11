#include <iostream>
using namespace std;

int drawshape1(int length) {
    for (int c1 = 0; c1 < length; c1++) {
        for (int c2 = 0; c2 < 4; c2++) {
            switch (c2) {
                case 0: cout << "./\\." << endl;
                    break;
                case 1: cout << "/..\\" << endl;
                    break;
                case 2: cout << "\\../" << endl;
                    break;
                case 3: cout << ".\\/." << endl;
                    break;
                }
            }
        }
    return 0;
}

int border() {
    for (int ct = 0; ct < 16; ct++) {
        cout << "*";
    }
    cout << "\n";
    return 0;
}

int drawshape2(int length) {
    for (int c1 = 0; c1 < length*2; c1++) {
        if (c1 % 2 == 0) {
            for (int c2 = 0; c2 < 3; c2++) {
                switch (c2) {
                case 0: border();
                    break;
                case 1: {
                    for (int c3 = 0; c3 < 5; c3++) {
                        switch (c3 % 2) {
                        case 0: cout << "*\\.";
                            break;
                        case 1: cout << "*./";
                            break;
                        }
                    }
                    cout << '*' << endl;
                    break;
                }
                case 2: {
                    for (int c4 = 0; c4 < 5; c4++) {
                        switch (c4 % 2) {
                        case 0: cout << "*.\\";
                            break;
                        case 1: cout << "*/.";
                            break;
                        }
                    }
                    cout << '*' << endl;
                    break;
                }
                }
            }
        }
        else {
            for (int c2 = 0; c2 < 3; c2++) {
                switch (c2) {
                case 0: border();
                    break;
                case 1: {
                    for (int c3 = 0; c3 < 5; c3++) {
                        switch (c3 % 2) {
                        case 0: cout << "*./";
                            break;
                        case 1: cout << "*\\.";
                            break;
                        }
                    }
                    cout << '*' << endl;
                    break;
                }
                case 2: {
                    for (int c4 = 0; c4 < 5; c4++) {
                        switch (c4 % 2) {
                        case 0: cout << "*/.";
                            break;
                        case 1: cout << "*.\\";
                            break;
                        }
                    }
                    cout << '*' << endl;
                    break;
                }
                }
            }
        }
    }
    border();
    return 0;
}

int drawshape3(int length) {
    for (int c1 = 0; c1 < length*2; c1++) {
        if (c1 % 2 == 0) {
            for (int c2 = 0; c2 < 3; c2++) {
                switch (c2) {
                case 0: border();
                    break;
                default: for (int c3 = 0; c3 < 16; c3++) {
                    if (c3 == 0 || c3 == 16) {
                        cout << '*';
                    }
                    else {
                        cout << '.';
                    }
                }
                    cout << "\n";
                    break;
                }
            }
        }
        else {
            for (int c2 = 0; c2 < 3; c2++) {
                switch (c2) {
                case 0: border();
                    break;
                case 1: for (int c3 = 0; c3 < 16; c3++) {
                    switch (c3) {
                    case 0: cout << '*';
                        break;
                    case 12: cout << '*';
                        break;
                    case 13: cout << "\\";
                        break;
                    case 15: cout << '*';
                        break;
                    default: cout << '.';
                        break;
                    }
                }
                    cout << "\n";
                    break;
                case 2: for (int c3 = 0; c3 < 16; c3++) {
                    switch (c3) {
                    case 0: cout << '*';
                        break;
                    case 12: cout << '*';
                        break;
                    case 14: cout << "\\";
                        break;
                    case 15: cout << '*';
                        break;
                    default: cout << '.';
                        break;
                    }
                }
                    cout << "\n";
                    break;
                }
            }
        }
    }
    border();
    return 0;
}

int main(){
    int shape = 0;
    int length = 0;
    cout << "Choose the shape (by typing 1,2 or 3) and then press enter" << endl;
    cin >> shape;
    cout << endl;
    cout << "Now type the length (how many shapes do you want to draw): " << endl;
    cin >> length;
    cout << endl;
    if (shape < 1 || shape > 3) {
        cout << "ERROR: Wrong number typed" << endl;
    }
    switch (shape) {
    case 1: drawshape1(length);
        break;
    case 2: drawshape2(length);
        break;
    case 3: drawshape3(length);
        break;
    }
    return 0;
}
