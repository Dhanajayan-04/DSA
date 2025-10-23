// User function Template for C++

void invTriangleWall(int s) {
    // Loop for each row
    for (int i = s; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  
    }
}